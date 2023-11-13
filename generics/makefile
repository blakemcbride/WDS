
include ../makefile.inc

#  When building with WINE you must compile generics.c with gcc and not winegcc!

curlib : ../include/generics.h
	-rm -f generics.h
	$(DPP) $(DPPOPTS) -g $(INCDIR)/generics.h -c
	$(CC) -c $(GFLAGS) generics.c
	$(AR) $(ARFLAGS) $(LIBDIR)/wds.a generics.o
	@if [ -f /usr/bin/ranlib -o -f /bin/ranlib ];\
	then \
		echo ranlib $(LIBDIR)/wds.a;\
		ranlib $(LIBDIR)/wds.a;\
	fi
	touch $@

clean:
	-rm -f generics.* *~ *.pdb

realclean: clean
	-rm -f curlib

