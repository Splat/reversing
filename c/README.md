# C
Various different little C/C++ programs intended for practicing reversing. Using radare2, ghidra, binwalk, pwntools(python3) for exploring the innards of applications.

## hello.c
Just a simple hello world exercising some C capabilities and tools for looking at the application post compilation. 

Compile: `gcc hello.c -o hello 
Dump: `objdump -M intel -D hello.out` 

## hello.cpp
Same as above roughly

Compile: `g++ hello.cpp -o hellocpp`
Dump: same as above
