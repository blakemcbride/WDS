@echo off
del /q *.obj 2>nul
del /q *.exe 2>nul
del /q *.ex1 2>nul
del /q *.map 2>nul
del /q *.res 2>nul
del /q *.aps 2>nul
del /q *.pdb 2>nul
del /q *.wsp 2>nul
del /q *.ilk 2>nul
del /q *.mdp 2>nul
del /q *.ncb 2>nul
del /q *.idb 2>nul
del /q *.bsc 2>nul
del /q *.vcp 2>nul
del /q *.pch 2>nul
del /q *.sbr *.opt *.sln 2>nul
del /q *.vcw 2>nul
del /q class1.c 2>nul
del /q generics.* 2>nul
rmdir /s /q WinDebug 2>nul
rmdir /s /q WinRel 2>nul
del /q *.ico 2>nul
del /q makefile makefile.msc 2>nul
del /q *.~ *.?~ *.??~ *.bak 2>nul
if exist --linux-.--- del --linux-.---

rem From Borland
del /q *.rws 2>nul
del /q *.~re 2>nul
del /q *.csm 2>nul
del /q *.dsw 2>nul
del /q *.~de 2>nul
