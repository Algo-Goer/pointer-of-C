#include <stdio.h>
int main(void)
{
    int num = 5;
    int *pi = &num;
    printf("%p\n", *pi);
    return 0;
}