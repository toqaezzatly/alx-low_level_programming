## What are argv and argc?
To access command-line arguments in C/C++, the main() function has two parameters: argc and argv.

```c
int main ( int argc, char *argv[])
{
    //your code;
}
//Another method to write *argv[] -> **argv
```
---------------------------------------------------
|argc| argv|
-----|-------
|arg is short for argument & c for counterarg is short for argument & c for counter|arg is short for argument & v for variable|
counter to count number of arguments passing to the main function including the program istself | vector to store argments passed to it |
---------------------------------------------------------------------------------------------------------------------------------------

```c
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("Number of arguments: %d\n", argc);

    for (int i = 0; i < argc; ++i) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
```
if you compile and run the program with the command ``` ./program arg1 arg2 arg3 ```, the output will be:
```c
Number of arguments: 4
Argument 0: ./program
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3
```
