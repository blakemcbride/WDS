@echo off

rem  Batch file used to create (from scratch) the base generics.h file
rem  included with Dynace
rem  NOTE: This script references Dynace directories (kernel, class, threads)
rem  that do not exist in the WDS tree.  It should be run from the Dynace repo.

cd ..\kernel
del /q generics.* 2>nul
..\bin\dpp -C -h -i -s *.d
move /y generics.h ..\include\generics.h

cd ..\class
..\bin\dpp -C -h -i -g ..\include\generics.h -s *.d
move /y generics.h ..\include\generics.h

cd ..\threads
..\bin\dpp -C -h -i -g ..\include\generics.h -s *.d
move /y generics.h ..\include\generics.h

cd ..\generics
