# 0x00. C - Hello, World
## Learning Objectives:
    At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
+ Why C programming is awesome
+ Who invented C
+ Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
+ What happens when you type **gcc main.c**
+ What is an entry point
+ What is **main**
+ How to print text using **printf**, **puts** and **putchar**
+ How to get the size of a specific type using the unary operator **sizeof**
+ How to compile using **gcc**
+ What is the default program name when compiling with **gcc**
+ What is the official C coding style and how to check your code with **betty-style**
+ How to find the right header to include in your source code when using a standard library function
+ How does the **main** function influence the return value of the program

## [0-preprocessor](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/0-preprocessor)
Write a script that runs a C file through the preprocessor and save the result into another file. 
+ The C file name will be saved in the variable **$CFILE**. 
+ The output should be saved in the file **c**.

## [1-compiler](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/1-compiler)
Write a script that compiles a C file but does not link. 
+ The C file name will be saved in the variable **$CFILE**. 
+ The output file should be named the same as the C file, but with the extension **.o** instead of **.c**. 
  - Example: if the C file is **main.c**, the output file should be **main.o**.

## [2-assembler](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/2-assembler)
Write a script that generates the assembly code of a C code and save it in an output file. 
+ The C file name will be saved in the variable **$CFILE**. 
+ The output file should be named the same as the C file, but with the extension **.s** instead of **.c**. 
  -Example: if the C file is **main.c**, the output file should be **main.s**.

## [3-name](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/3-name)
Write a script that compiles a C file and creates an executable named **cisfun**. 
+ The C file name will be saved in the variable **$CFILE**.

## [4-puts.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/4-puts.c)
Write a C program that prints exactly **"Programming is like building a multilingual puzzle**, followed by a new line. 
+ Use the function **puts**.
+ You are not allowed to use **printf**. 
+ Your program should end with the value **0**.

## [5-printf.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/5-printf.c)
Write a C program that prints exactly **with proper grammar, but the outcome is a piece of art,**, followed by a new line. 
+ Use the function **printf**. 
+ You are not allowed to use the function **puts**. 
+ Your program should return **0**. 
+ Your program should compile without warning when using the **-Wall gcc** option.

## [6-size.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/6-size.c)
Write a C program that prints the size of various types on the computer it is compiled and run on.
+ You should produce the exact same output as in the example:
  - ./size32
    - Size of a char: 1 byte(s)
    - Size of an int: 4 byte(s)
    - Size of a long int: 4 byte(s)
    - Size of a long long int: 8 byte(s)
    - Size of a float: 4 byte(s)
  - ./size64
    - Size of a char: 1 byte(s)
    - Size of an int: 4 byte(s)
    - Size of a long int: 8 byte(s)
    - Size of a long long int: 8 byte(s)
    - Size of a float: 4 byte(s)
+ Warnings are allowed. 
+ Your program should return **0**. 
+ You might have to install the package **libc6-dev-i386** on your Linux to test the **-m32 gcc** option.
<<<<<<< HEAD

## [100-intel](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/100-intel)
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. 
+ The C file name will be saved in the variable **$CFILE**.
+ The output file should be named the same as the C file, but with the extension **.s** instead of **.c**. 
  -Example: if the C file is **main.c**, the output file should be **main.s**.

## [101-quote.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/101-quote.c)
Write a C program that prints exactly **and that piece of art is useful" - Dora Korpar, 2015-10-19**, followed by a new line, to the standard error. 
+ You are not allowed to use any functions listed in the NAME section of the man (3) **printf** or man (3) **puts**. 
+ Your program should return **1**. 
+ Your program should compile without any warnings when using the **-Wall gcc** option.

=======

## [100-intel](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/100-intel)
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. 
+ The C file name will be saved in the variable **$CFILE**.
+ The output file should be named the same as the C file, but with the extension **.s** instead of **.c**. 
  -Example: if the C file is **main.c**, the output file should be **main.s**.

## [101-quote.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x00-hello_world/101-quote.c)
Write a C program that prints exactly **and that piece of art is useful" - Dora Korpar, 2015-10-19**, followed by a new line, to the standard error. 
+ You are not allowed to use any functions listed in the NAME section of the man (3) **printf** or man (3) **puts**. 
+ Your program should return **1**. 
+ Your program should compile without any warnings when using the **-Wall gcc** option.
