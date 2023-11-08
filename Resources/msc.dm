
# DMAKE makefile for NT using Microsoft Visual C++ 32

WDIR = include

LIBDIR = ..\lib
INCDIR = ..\include

CFEXTRA += -MT

.IF $(NATIVE_THREADS)
CFEXTRA += -DNATIVE_THREADS
.END


.d.c .PRECIOUS :
	dpp $(STRAT) -C -g $(INCDIR)\generics.h -t -p $<


.IF $(DEBUG)
CFLAGS = -nologo -I$(INCDIR) -Od -D_WINDOWS -DWIN32 -Zi -Fd$(LIBDIR)\dynm32.pdb $(CFEXTRA) -I$(WDIR) -I..\windows $(CFEXTRA)
.ELSE
CFLAGS = -nologo -I$(INCDIR) -O2 -D_WINDOWS -DWIN32 $(CFEXTRA) -I$(WDIR) -I..\windows $(CFEXTRA)
.END

.IF $(DEMO)
CFLAGS += -DDEMO
.ENDIF


CLASS_SRC =

C_SRC = readres.c

OBJS = {$(C_SRC:b)}.obj

allok.nm .LIBRARY :  curlib.nm
	echo Done >$@

curlib.nm .LIBRARY : $(OBJS)
.IF  $(NEW)
	lib /nologo /out:$(LIBDIR)\dwdsnm.lib @$(mktmp $(?:t"\n")\n)
.ELSE
	lib /nologo /out:$(LIBDIR)\dwdsnm.lib $(LIBDIR)\dwdsnm.lib @$(mktmp $(?:t"\n")\n)
.END
	rm -zq *.obj
	echo Done >$@

$(INCDIR)\generics.h : $(CLASS_SRC)
	dpp $(STRAT) -C -g $(INCDIR)\generics.h -t $(INCDIR)\generics.h -h $(INCDIR)\generics.h -p @$(mktmp $(^:t"\n"))


newgens : 
	dpp $(STRAT) -C -g $(INCDIR)\generics.h -p *.d -h $(INCDIR)\generics.h

makegens:
	dpp $(STRAT) -C -g $(INCDIR)\generics.h -s *.d -h $(INCDIR)\generics.h


clean:
	rm -zq *.obj *.o *.exe *.err *.pdb
	rm -zq *.~ *.?~ *.??~ *.{* *.bak #*.*

realclean: clean
	rm -zq curlib.* allok.* generics.h generics.1

