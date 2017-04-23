dumpster-fire
=============

A utility program to forcibly empty the Windows recycle bin.

Overview
--------

Deleting files through the Windows desktop is a two step process:

1) Delete the file from the Windows Explorer.
2) Empty the recycle bin.

Curiously, there is no way to automate (that I'm aware of) the second
task directly through Windows.  So this program just empties the
recycle bin, which can be setup to run as a scheduled task in Windows.

Building
--------

Open a Visual Studio command prompt or load the `vcvarsall.bat` script
through the command line interface tool of your choice.  With Visual
Studio 2017 Community version the `vcvarsall.bat` script is typically
located in:

`C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\`

Then from this project directory run the `build-msvc.bat` script and
then move the executable to a directory on your path which you can
call from a Windows scheduled task.
