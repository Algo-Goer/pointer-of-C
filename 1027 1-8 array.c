#include <stdio.h>

int main(void) 
{
    int array[5]; //��array����Ϊ�������͵ı���
    int i;

    /* ������array����ֵ */
    for (i = 0; i < 5; i++) 
    {
        array[i] = i;  //��array��Ԫ������ֵ
    }

    /* ��������� */
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }

    /* ���array�и�Ԫ�ص�ַ */
    for (i = 0; i < 5; i++)
    {
        printf("&array[%d]...%p\n", i, (void*)&array[i]);  //�����н���ɿ�����ÿ����ַ֮����Ϊ4 bytes���պ���int�ĳ���
    }

    return 0;
}