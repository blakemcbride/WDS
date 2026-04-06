#  Makefile designed for use by the GNUMAKE utility and		-*-Makefile-*-
#  the Wine libraries

WINE = 1

include ../makefile.inc

CC = winegcc

WDS_PATH = ..
DYNACE_PATH = /home/blake/Dynace

BINDIR = $(WDS_PATH)/bin
LIBDIR = $(WDS_PATH)/lib
INCDIR = $(WDS_PATH)/include
DYNINC = $(DYNACE_PATH)/include
DYNLIB = $(DYNACE_PATH)/lib

WINEINCPATH = /usr/include/wine

WINEINC = -I$(WINEINCPATH)/windows


WINELIBS = -lkernel32 -luser32 -lgdi32 -lcomdlg32 -lcomctl32 -ladvapi32 -lshell32 -lmpr -lmsimg32 -lwininet

DEBUG = -g
#DEBUG = -O

CFLAGS = -I$(INCDIR) -I$(DYNINC) $(WINEINC) -D_WINDOWS -D_WIN32 -D__WINE__ -DINTEGRA -std=gnu17 -include $(INCDIR)/winecompat.h
GFLAGS = -I$(INCDIR) -O -w

TARGET = cld

CFILES = main.c flash.c jsfl.c

OBJS = $(CFILES:.c=.o)

%.res : %.rc
	echo '#include <winuser.h>' >temp.rc
	echo '#include <commctrl.h>' >>temp.rc
	cat $< >>temp.rc
	wrc temp.rc
	rm -f temp.rc
	mv temp.res $@

%.o : %.c
	$(CC) $(CFLAGS) $(DEBUG) -c $<


$(TARGET) : $(OBJS) main.res
	$(CC) $(DEBUG) -o $(TARGET) $(OBJS) main.res $(LIBDIR)/wds.a $(DYNLIB)/dynace.a $(WINELIBS) -lm
	mv $(TARGET).exe $(TARGET)

clean:
	-rm -f *.obj *.exe generics.* *.o *~ main.res temp.rc

realclean: clean
	-rm -f $(TARGET) $(TARGET).exe.so
