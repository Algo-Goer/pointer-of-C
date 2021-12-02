#include <stdio.h>
int main()
{
    char a[20] = "You_are_a_girl";
    char *p = a;
    char **ptr = &p;

    // printf("p  = %d\n", p);
    // printf("ptr = %d\n", ptr);
    // printf("*ptr = %d\n", *ptr);
    printf("**ptr = %c\n", **ptr);

    ptr++;
    
    // printf("ptr = %d\n", ptr);
    // printf("*ptr = %d\n", *ptr);
    printf("**ptr = %c\n", **ptr);
}