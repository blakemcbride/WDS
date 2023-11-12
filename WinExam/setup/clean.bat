@echo off
rm -zq *.obj
rm -zq *.exe
rm -zq *.ex1
rm -zq *.map
rm -zq *.res
rm -zq *.aps
rm -zq *.pdb
rm -zq *.wsp
rm -zq *.ilk
rm -zq *.mdp
rm -zq *.ncb
rm -zq *.idb
rm -zq *.bsc
rm -zq *.vcp
rm -zq *.pch
rm -zq *.sbr *.opt *.sln
rm -zq *.vcw
rm -zq *.map
rm -zq class1.c
rm -zq generics.*
rm -zqr WinDebug
rm -zqr WinRel
rm -zqr *.ico
rm -qzr makefile makefile.msc
rm -zq *.~ *.?~ *.??~ *.bak
if exist --linux-.--- del --linux-.---

rem From Borland
rm -zq *.rws
rm -zq *.~re
rm -zq *.csm
rm -zq *.dsw
rm -zq *.~de
