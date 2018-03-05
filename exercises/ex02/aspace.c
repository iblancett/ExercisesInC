/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int var1;

int main ()
{
    int var2 = 5;
    void *p = malloc(128);
<<<<<<< HEAD
    void *q = malloc(128);
    void *t = malloc(2);
    void *r = malloc(27);
    char *s = "Literal string";
=======
    char *s = "Hello, World";
>>>>>>> eabcd612b48ede32a05df58f23fee9f78d330d85

    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);
<<<<<<< HEAD
    printf ("Address of p is %p\n", p);
    printf ("Address of s is %p\n", s);
    // t and r are 32 bytes apart
    printf ("Address of t is %p\n", t);
    printf ("Address of r is %p\n", r);
=======
    printf ("p points to %p\n", p);
    printf ("s points to %p\n", s);
>>>>>>> eabcd612b48ede32a05df58f23fee9f78d330d85

    return 0;
}
