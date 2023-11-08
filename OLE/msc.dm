#  Makefile designed for use by the DMAKE.EXE utility and
#  Microsoft Visual C/C++ 32 bit



C_SRC = makeguid.c

CLASS_SRC = ComClient.d ComServer.d ComInterface.d ComInstance.d OLEDispatch.d OLEClient.d


LIBDIR = ..\lib
INCDIR = ..\include

CFEXTRA += -MT

.IF $(NATIVE_THREADS)
CFEXTRA += -DNATIVE_THREADS
.END


.IF	$(DEBUG)
CFLAGS = -nologo -I$(INCDIR) -WX -D_WINDOWS -Od -Zi -Fd$(LIBDIR)\dynm32.pdb $(CFEXTRA)
GFLAGS = -nologo -I$(INCDIR) -Oityb1 -Gs -Gy -D_WINDOWS -Zi -Fd$(LIBDIR)\dynm32.pdb
LFLAGS = /nologo /subsystem:windows /debug
.ELSE
CFLAGS = -nologo -I$(INCDIR) -WX -O2 -D_WINDOWS $(CFEXTRA)
GFLAGS = -nologo -I$(INCDIR) -Oityb1 -Gs -Gy -D_WINDOWS
LFLAGS = /nologo /subsystem:windows
.END



LIBS = $(LIBDIR)\{dwdsnm dynlcm}.lib

MSLIBS = {kernel32 user32 gdi32 winspool comdlg32 advapi32 shell32 odbc32 winmm}.lib


OBJS = {$(CLASS_SRC:b)}.obj {$(C_SRC:b)}.obj

CC = cl

.d.c .PRECIOUS :
	dpp -C -g $(INCDIR)\generics.h -p $<


# Since DMAKE diversions treat the backslach like an escape sequence it is
# necessary to double up the backslashes located in paths
LIBS2     := $(LIBS:s/\/\\/)
OBJS2     := $(OBJS:s/\/\\/)


.rc.res:
	rc $<

allok.nm .LIBRARY : $(INCDIR)\generics.h curlib.nm
	echo Done >$@


curlib.nm .LIBRARY : $(OBJS)
.IF  $(NEW)
	lib /nologo /out:$(LIBDIR)\dwdsnm.lib @$(mktmp $(?:t"\n")\n)
.ELSE
	lib /nologo /out:$(LIBDIR)\dwdsnm.lib $(LIBDIR)\dwdsnm.lib @$(mktmp $(?:t"\n")\n)
.END
	rm -zq *.obj
	echo Done >$@

main.obj : resource.h


$(INCDIR)\generics.h : $(CLASS_SRC)
	dpp $(STRAT) -C -g $(INCDIR)\generics.h -t $(INCDIR)\generics.h -h $(INCDIR)\generics.h -p @$(mktmp $(^:t"\n"))


generics.c : generics.h
	dpp $(STRAT) -C -g -c -Isc windows.h sql.h sqlext.h

generics.obj : generics.c
	$(CC) -c $(GFLAGS) $<

newgens : 
	dpp $(STRAT) -C -g $(INCDIR)\generics.h -h $(INCDIR)\generics.h -p @$(mktmp $(CLASS_SRC:t"\n")\n)

makegens:
	dpp $(STRAT) -C -g $(INCDIR)\generics.h -h $(INCDIR)\generics.h -s @$(mktmp $(CLASS_SRC:t"\n")\n)

clean:
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
	rm -zq *.map *.ncb
	rm -zqr WinDebug
	rm -zqr WinRel
	rm -zq *.~ *.?~ *.??~ *.{* *.bak #*.*


realclean: clean
	rm -zq curlib.* allok.* {$(CLASS_SRC:b)}.c generics.c generics.h generics.1

