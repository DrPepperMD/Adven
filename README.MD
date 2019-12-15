# Adven pre alpha version 0.0.1 GNU/Linux

How to compile: (Or you could always use the pre-compiled binaries in bin)
what you are going to need:
* GCC
* Standard C headers
* GNU/Linux

To compile this you need to find main.c which can be found in Adven/src/main,
just type in
```
gcc main.c -w && mv a.out adven.out && mv adven.out ../../bin/adven.out
```
This will compile, rename and move it to the bin folder.