@echo off
del /q *.bak 2>nul
del /q *.ckp 2>nul
del /q *.bk2 2>nul
del /q emacsmem 2>nul
del /q *.~ 2>nul
del /q *.?~ 2>nul
del /q *.??~ 2>nul
del /q #*.* 2>nul
del /q *.obj *.o curlib.* *.err generics.* 2>nul
if exist --linux-.--- del --linux-.---
del /q *.{* 2>nul
