# Adven pre alpha version 0.1.2 for GNU/Linux

# Compilable but semi-functional

How to compile: (Or you could always use the pre-compiled binaries in bin)
what you are going to need:
* GCC
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
