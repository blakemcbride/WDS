#  Makefile designed for use by the DMAKE.EXE utility and		-*-Makefile-*-
#  Microsoft Visual C/C++ 32 bit



CLASS_SRC = Java.d JavaClass.d JavaObject.d JavaCallback.d

#  You must use the -E dmake option to make use of environment variables
JAVAHOME = $(JAVA_HOME)   #  \j2sdk1.4.1_01


DYNACE_PATH = ..\..
JAVAINC = $(JAVAHOME)\include
JAVAINC2 = $(JAVAHOME)\include\win32

LIBDIR = $(DYNACE_PATH)\lib
INCDIR = $(DYNACE_PATH)\include

CFEXTRA += -MT

.IF $(NATIVE_THREADS)
CFEXTRA += -DNATIVE_THREADS
.END


.IF	$(DEBUG)
CFLAGS = -nologo -I$(INCDIR) -WX -Zi -Od -D_WINDOWS -W3 -I$(JAVAINC) -I$(JAVAINC2) -Fd$(LIBDIR)\dynm32.pdb $(CFEXTRA)
.ELSE
CFLAGS = -nologo -I$(INCDIR) -WX -O2 -D_WINDOWS -I$(JAVAINC) -I$(JAVAINC2) $(CFEXTRA)
.END



OBJ = $(CLASS_SRC:s/.d/.obj/)

#OBJS = {$(C_SRC:b)}.obj {$(CLASS_SRC:b)}.obj

CC = cl

.d.c .PRECIOUS :
	dpp $(STRAT) -C -g $(INCDIR)\generics.h -p $<


allok.cm .LIBRARY :  $(INCDIR)\generics.h curlib.cm
	echo Done >$@

curlib.cm .LIBRARY : $(OBJ)
.IF	$(NEW)
	lib /nologo /out:$(LIBDIR)\dynlcm.lib @$(mktmp $(?:t"\n")\n)
.ELSE
	lib /nologo /out:$(LIBDIR)\dynlcm.lib $(LIBDIR)\dynlcm.lib @$(mktmp $(?:t"\n")\n)
.END
	rm -zq *.obj
	echo Done >$@

$(INCDIR)\generics.h : $(CLASS_SRC)
	dpp $(STRAT) -C -g $(INCDIR)\generics.h -t $(INCDIR)\generics.h -h $(INCDIR)\generics.h -p @$(mktmp $(^:t"\n"))

Java.obj JavaClass.obj : package.h

newgens:
	dpp $(STRAT) -C -g $(INCDIR)/generics.h -p *.d -h $(INCDIR)\generics.h

makegens:
	dpp $(STRAT) -C -g $(INCDIR)/generics.h -s *.d -h $(INCDIR)\generics.h


clean realclean:
	rm -zq {$(CLASS_SRC:b)}.c
	rm -zq *.cm
	rm -zq *.obj
	rm -zq *.exe
	rm -zq *.ex1
	rm -zq *.res
	rm -zq *.aps
	rm -zq *.pdb
	rm -zq *.wsp
	rm -zq *.ilk
	rm -zq *.bsc
	rm -zq *.vcp
	rm -zq *.pch
	rm -zq *.sbr
	rm -zq *.vcw
	rm -zq *.map
	rm -zq generics.*
	rm -zqr WinDebug
	rm -zqr WinRel
	rm -zq *.idb *.mdp *.ncb
	rm -zq *.dsw *.opt *.plg
	rm -zq *.dsp

