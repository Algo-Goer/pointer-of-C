#include <stdio.h>
int main(void)
{
    int num = 0;
    int *pi = &num;
    printf("Address of pi: %d Value: %d\n", &pi, pi);
    printf("Address of pi: %x Value: %x\n", &pi, pi);
    printf("Address of pi: %o Value: %o\n", &pi, pi);
    printf("Address of pi: %p Value: %p\n", &pi, pi);
    printf("Value of pi: %p\n", (void*)pi);
    return 0;
}
