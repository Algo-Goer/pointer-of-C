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
    p = array;   
    for (i = 0; i < 5; i++) 
    {
        printf("%d\n", array[i]);   /* ��p[i]�滻��array[i] */
    }
    
    return 0;
}