//ʹ��++�������ָ���1��ָ��ͻ�ǰ��sizeof(int)��bytes
#include <stdio.h>

int main(void)
{
    int array[5];
    int *p;
    int i;

    /* ������array����ֵ */
    for (i = 0; i < 5; i++)
    {
        array[i] = i;
    }

    /* ��������ݣ���д�棩*/
    p = array;   /* ��&array[0]�滻��array */
    for (i = 0; i < 5; i++) 
    {
        printf("%d\n", *(p + i));  
    }
    
    return 0;
}