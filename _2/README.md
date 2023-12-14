# C - Dynamic libraries

For more info on how to create and work with dynamic libraries: https://medium.com/@bdov_/https-medium-com-bdov-c-dynamic-libraries-what-why-and-how-66cf777019a7

This repo contains a dynamic library with object files. These object files contain functions, variables, and source code as listed below.

## Tests :heavy_check_mark:

## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life**
  * [libdynamic.so](./libdynamic.so): C Dynamic library containing all the functions
  listed below:
    * `int _putchar(char c);`
    * `int _islower(int c);`
    * `int _isalpha(int c);`
    * `int _abs(int n);`
    * `int _isupper(int c);`
    * `int _isdigit(int c);`
    * `int _strlen(char *s);`
    * `void _puts(char *s);`
    * `char *_strcpy(char *dest, char *src);`
    * `int _atoi(char *s);`
    * `char *_strcat(char *dest, char *src);`
    * `char *_strncat(char *dest, char *src, int n);`
    * `char *_strncpy(char *dest, char *src, int n);`
    * `int _strcmp(char *s1, char *s2);`
    * `char *_memset(char *s, char b, unsigned int n);`
    * `char *_memcpy(char *dest, char *src, unsigned int n);`
    * `char *_strchr(char *s, char c);`
    * `unsigned int _strspn(char *s, char *accept);`
    * `char *_strpbrk(char *s, char *accept);`
    * `char *_strstr(char *haystack, char *needle);`

  * [main.h](./main.h): Header file containing the prototypes of all functions
  included in `libdynamic.so`.

![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/93dfe546-7e8f-41ed-8dcb-ace3cd72f8cb)

![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/18a17655-a30d-411f-8882-076a7a6e14de)

* **1. Without libraries what have we? We have no past and no future**
  * [create_dynamic_lib.sh](./create_dynamic_lib.sh): `Bash` script that creates a dynamic
  library called `liball.so` from all the `.c` files in the current directory.

![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/018ba4ae-4512-4aff-996d-46c03343ad7c)

![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/edb29370-488a-4e66-a714-e984877930f9)

![image](https://github.com/richie-omondi/alx-low_level_programming/assets/69873039/ace34de7-b7b9-4810-8772-f7b47d0628a4)

Link to the copy of the program: https://github.com/alx-tools/0x18.c



