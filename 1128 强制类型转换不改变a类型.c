#include <stdio.h>
int main()
{
    char a[20] = {'a'};
    int *ptr = (int *)a; // ǿ������ת��������ı�a�����ͣ����Ų���ʡ��
    ptr++;
    printf("%d\n", &ptr);
    printf("%d\n", &a);
    printf("%p\n", &ptr);
    printf("%p\n", &a);
    printf("%c\n", a);
    return 0;
}
