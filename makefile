# Makefile for Linux, Mac, BSD, Cygwin, Solaris, etc.   	-*-Makefile-*-
# for WINE
include makefile.inc
all : setup.unx
	cd generics ; $(MAKE) -f makefile
	cd Windows  ; $(MAKE) -f makefile
	cd ODBC     ; $(MAKE) -f makefile
	cd Resources  ; $(MAKE) -f makefile

base : makegens
	cd generics ; $(MAKE) -f makefile
	cd Windows  ; $(MAKE) -f makefile
	cd ODBC     ; $(MAKE) -f makefile
	cd Resources    ; $(MAKE) -f makefile
#	cd Java/Dynace  ; $(MAKE) -f makefile

debug : setup.unx
	cd generics ; $(MAKE) -f makefile DEBUG=1

clean :
	cd generics ; $(MAKE) $@ -f makefile
	cd Windows  ; $(MAKE) $@ -f makefile
	cd ODBC     ; $(MAKE) $@ -f makefile
	cd Resources  ; $(MAKE) $@ -f makefile
	find . -name '*~' -exec rm \{\} \;
	find . -name '*.o' -exec rm \{\} \;
	find . -name '*.obj' -exec rm \{\} \;
	find . -name '*.tmp' -exec rm \{\} \;
	find . -name '*.{*' -exec rm \{\} \;
	find . -name '--linux-.---' -exec rm - \{\} \;
	find examples -name '*.exe' -exec rm \{\} \;
	find examples -name 'main' -exec rm \{\} \;

realclean : clean
	rm -f setup.unx setup.dos setup.p9
	echo $(CC) $(HCC)
	rm -f bin/delcr
	rm -f bin/delcr.exe
	rm -f bin/addcr
	rm -rf lib/wds.a lib/dynlcm.lib lib/dynm32.pdb
	rm -f include/generics.h

ship-unix : realclean
	find . -name '*.exe' -exec rm \{\} \;

setup.unx :
	@-mkdir lib
	cd bin ; $(HCC) -o delcr -O delcr.c
#  Times associated with .c files must be after the .d files for make's sake
	sleep 2
	cd docs     ; ../bin/delcr *.txt *.tex
	cd generics ; ../bin/delcr makefile README makegens mkgens3 mkgens4 mkgens4f mkgensx
	cd include  ; ../bin/delcr *.h
	cd generics ; chmod 775 makegens mkgens3 mkgens4 mkgens4f mkgensx
	find examples -name 'makefile' -exec bin/delcr \{\} \;
	find examples -name 'readme'       -exec bin/delcr \{\} \;
	find examples -name 'README'       -exec bin/delcr \{\} \;
	find examples -name '*.h'          -exec bin/delcr \{\} \;
	find examples -name '*.d'          -exec bin/delcr \{\} \;
	find examples -name '*.c'          -exec bin/delcr \{\} \;
	bin/delcr examples/list makefile makefile.inc
#	find multhead -type f -exec bin/delcr \{\} \;
	rm -f setup.dos
	touch setup.unx

setup.dos :
	cd bin ; $(CC) -o addcr -O addcr.c
	cd include  ; ../bin/addcr *.h
	cd docs     ; ../bin/delcr *
	cd generics ; ../bin/addcr  README
	find examples -name 'readme'       -exec bin/addcr \{\} \;
	find examples -name 'README'       -exec bin/addcr \{\} \;
	find examples -name '*.h'          -exec bin/addcr \{\} \;
	find examples -name '*.d'          -exec bin/addcr \{\} \;
	find examples -name '*.c'          -exec bin/addcr \{\} \;
	bin/addcr examples/list
	rm -f setup.unx
	touch setup.dos

makegens :
	cd Windows ; $(DPP) $(DPPOPTS) -h -i -g $(DYNACE_PATH)/include/generics.h -s *.d ; mv generics.h ../include/generics.h
	cd ODBC ; $(DPP) $(DPPOPTS) -h -i -g ../include/generics.h -s *.d ; mv generics.h ../include/generics.h
#	cd OLE ; $(DPP) $(DPPOPTS) -h -i -g ../include/generics.h -s *.d ; mv generics.h ../include/generics.h

newgens : makegens
	cd Windows  ; $(MAKE) -f makefile newgens
	cd ODBC     ; $(MAKE) -f makefile newgens
#	cd Java/Dynace  ; $(MAKE) -f makefile newgens

# The following target is used to convert an SVN checkout into a shippable distribution
# It must only be run immediatly after a co or export
bootable:
	rm -f include/generics.h
	cp bin/Linux/dpp bin
	chmod 755 bin/dpp
	$(MAKE) -f makefile STRAT=-S2 newgens
	touch  ODBC/sqlgrammar.c ODBC/sqlgrammar.h ODBC/sqltokens.c
