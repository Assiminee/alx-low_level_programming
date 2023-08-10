# 0x09-static_libraries
#### In C programming, a static library, also known as an archive, is a single file holding a collection of object files. These object files are combined to form a library, which can then be used as a single entity during the linking phase of program compilation. This allows for code reuse and modular programming, as functions or routines that are frequently used can be written once, stored in a static library, and then referenced in future programs.

#### The main advantage of static libraries is that they are directly embedded into the final executable of a program. This means that the program can run on any system without needing to have the library installed. However, this also means that if the library is updated, any programs using it need to be recompiled to benefit from the changes.

#### This directory contains various C files that demonstrate the creation and usage of static libraries. It also includes a script to automate the creation of a static library from C files.

## Files Description
### [0-isupper.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/0-isupper.c)
A C function that checks if a character is uppercase.

### [0-memset.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/0-memset.c)
A C function that fills memory with a constant byte.

### [0-strcat.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/0-strcat.c)
A C function that concatenates two strings.

### [1-isdigit.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/1-isdigit.c)
A C function that checks if a character is a digit.

### [1-memcpy.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/1-memcpy.c)
A C function that copies memory area.

### [1-strncat.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/1-strncat.c)
A C function that concatenates two strings up to n characters.

### [2-strchr.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/2-strchr.c)
A C function that locates a character in a string.

### [2-strlen.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/2-strlen.c)
A C function that returns the length of a string.

### [2-strncpy.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/2-strncpy.c)
A C function that copies a string.

### [3-islower.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/3-islower.c)
A C function that checks if a character is lowercase.

### [3-puts.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/3-puts.c)
A C function that prints a string.

### [3-strcmp.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/3-strcmp.c)
A C function that compares two strings.

### [3-strspn.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/3-strspn.c)
A C function that gets the length of a prefix substring.

### [4-isalpha.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/4-isalpha.c)
A C function that checks if a character is an alphabet.

### [4-strpbrk.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/4-strpbrk.c)
A C function that searches a string for any of a set of bytes.

### [5-strstr.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/5-strstr.c)
A C function that locates a substring.

### [6-abs.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/6-abs.c)
A C function that computes the absolute value of an integer.

### [9-strcpy.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/9-strcpy.c)
A C function that copies the string pointed to by src to the buffer pointed to by dest.

### [100-atoi.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/100-atoi.c)
A C function that converts a string to an integer.

### [_putchar.c](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/_putchar.c)
A C function that writes a character to stdout.

### [main.h](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/main.h)
A header file containing all function description

### [create_static_lib.sh](https://github.com/Assiminee/alx-low_level_programming/blob/main/0x09-static_libraries/create_static_lib.sh)
#### Library Creation Script

This Bash script streamlines the process of creating a static library in C programming. By executing this script, all .c files within the current directory are compiled using the gcc compiler, generating corresponding object files (.o). Subsequently, the ar command is employed to construct a static library named liball.a by amalgamating the generated object files. This automated approach facilitates the creation of reusable libraries from your C source files.
