//使用++运算符对指针加1，指针就会前进sizeof(int)个bytes
#include <stdio.h>

int main(void)
{
    int array[5];
    int *p;
    int i;

    /* 对数组array设置值 */
    for (i = 0; i < 5; i++)
    {
        array[i] = i;
    }

    /* 输出其内容（改写版）*/
    p = array;   
    for (i = 0; i < 5; i++) 
    {
        printf("%d\n", p[i]);   /* 把*(p + i)替换成p[i] */
    }
    
    return 0;
}