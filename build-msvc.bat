@echo off
setlocal enableextensions

cl -nologo -O2 -Fe:dumpster-fire.exe dumpster-fire.c /link shell32.lib
del dumpster-fire.obj
