#  Makefile designed for use by the GNUMAKE utility and		-*-Makefile-*-
#  the Wine libraries

CC = winegcc


# Define DYNACE_PATH either through the following variable of an environment
# variable like "export DYNACE_PATH=..."
#DYNACE_PATH = ../..

WDS_PATH=../..

WINEINCPATH = /usr/include/wine


BINDIR = $(DYNACE_PATH)/bin
LIBDIR = $(WDS_PATH)/lib
INCDIR = $(WDS_PATH)/include
DYNINC = $(DYNACE_PATH)/include

WINEINC = -I$(WINEINCPATH)/windows -I$(WINEINCPATH)/msvcrt


WINELIBS = -lwine -lkernel32 -luser32 -lgdi32 -lcomdlg32 -lcomctl32 -ladvapi32 -lshell32 -lmpr -lmsvcrt -lmsimg32

DEBUG = -g
#DEBUG = -O

CFLAGS = -I$(INCDIR) -I$(DYNINC) $(WINEINC) -D_WINDOWS
GFLAGS = -I$(INCDIR) -O -w

TARGET = main

CFILES = main.c

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


$(TARGET) : $(OBJS) algocorp.ico main.res
	$(CC) $(DEBUG) -o $(TARGET) $(OBJS) main.res $(LIBDIR)/wds.a $(DYNACE_PATH)/lib/dynace.a $(WINELIBS) -lm 
	mv $(TARGET).exe $(TARGET)

algocorp.ico : ../setup/algocorp.ico
	cp $^ $@

clean:
	-rm -f *.obj *.exe generics.* *.o *~ main.res temp.rc

realclean: clean
	-rm -f $(TARGET) $(TARGET).exe.so
