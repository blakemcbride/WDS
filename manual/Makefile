
%.pdf : %.tex
	texi2pdf $<

%.html : %.tex
#	texi2any --html --no-split $<
	texi2html $<

all: WDS.pdf WDS.html odbcusr.pdf s-odbcusr.pdf s-WDS.pdf


WDS.pdf : WDS.tex wds1.tex wds2.tex wds3.tex wds4.tex wdscls1.tex
	texi2pdf $<
#	pdftk $@ cat 1-2 221-end 3-220 output out.pdf
#	mv out.pdf $@


WDS.html : WDS.tex wds1.tex wds2.tex wds3.tex wds4.tex wdscls1.tex

s-WDS.pdf : s-WDS.tex s-wds1.tex s-wds2.tex s-wds3.tex s-wds4.tex wdscls1.tex

s-odbcusr.pdf : s-odbcusr.tex s-odbcusr1.tex

s-odbcusr.tex: odbcusr.tex
	sed -f script2 $< >$@


s-odbcusr1.tex: odbcusr1.tex
	sed -f script $< >$@


s-WDS.tex: WDS.tex
	sed -f script3 $< >$@

s-wds1.tex: wds1.tex
	sed -f script $< >$@

s-wds2.tex: wds2.tex
	sed -f script $< >$@

s-wds3.tex: wds3.tex
	sed -f script $< >$@

s-wds4.tex: wds4.tex
	sed -f script $< >$@

classes.1 : classes.tex
	tex classes
	dvips classes
	gs2 classes
	mv classes.jep classes.1

wdscls.1 : wdscls.tex
	tex wdscls
	dvips wdscls
	gs2 wdscls
	mv wdscls.jep wdscls.1

clean:
	rm -f s-*.tex
	rm -f *.cp *.fn *.fns *.ky *.pg *.toc *.tp *.vr *.aux *.log
	rm -f *~ *.bak core

realclean: clean
	rm -f *.dvi *.ps *.pdf *.html


