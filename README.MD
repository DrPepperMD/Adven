# Adven pre alpha version 0.1.2 for GNU/Linux

# Halted development for the time being as I work on some other things that will help this

How to compile: (Or you could always use the pre-compiled binaries in bin)
what you are going to need:
* GCC
* Standard C headers
* GNU/Linux

To compile this you need to find main.c which can be found in Adven/src/main,
just type in
```
gcc main.c -w && mv a.out ../../bin/adven
```
This will compile, rename and move it to the bin folder.

How to compile assembly version:
```
gcc main.s -o adven.out
```

Also if you're interested in creating a Windows compatible version for some
unknown reason contact me!
