#include <stdio.h>
int main()
{
    char a[20] = {'a'};
    int *ptr = (int *)a; // 强制类型转换并不会改变a的类型，括号不可省略
    ptr++;
    printf("%d\n", &ptr);
    printf("%d\n", &a);
    printf("%p\n", &ptr);
    printf("%p\n", &a);
    printf("%c\n", a);
    return 0;
}
