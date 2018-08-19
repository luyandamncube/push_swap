# wethinkcode_

## libft

<img src="resources/libft-finalmark.png" width="350" />

libc project

This project recreates C standard library functions to create a library that we base all of our work at WeThinkCode on. 
The only functions we had access to were `write`, `malloc` and `free`. 
Any and all other functions we required had to be created from scratch.

Concepts tested:
- C-Style string handling
- Memory allocation
- Pointers
- Algorithms
- I/O and Printing

## Makefile commands

Library compile using `make`

`make` / `make all`    Compiles all source files into object code and then links to library

`make clean`           Removes `.o` files

`make fclean`          Removes executable file

`make re`              Runs `fclean` then `all` 
