/*ʾ������������hoge_p����4��Υ����׼���������û��ͨ����ָ������ڴ���ʡ��������С�

����ָ��ļӼ����㣬��׼ֻ����ָ��ָ������Ԫ�أ��򳬹�����ĩβ1��Ԫ�ص�λ�ã����ҼӼ�����Ľ��Ҳָ��
����Ԫ�أ��򳬹�����ĩβ1��Ԫ�ص�λ�á�
*/
#include <stdio.h>

int main(void)
{
    int hoge;
    int *hoge_p;

    /* ��ָ��hoge��ָ�븳��hoge_p */
    hoge_p = &hoge;
    /* ���hoge_pֵ */
    printf("hoge_p..%p\n", (void*)hoge_p);
    /* hoge_p + 1 */
    hoge_p++; 
    /* ���hoge_pֵ */
    printf("hoge_p..%p\n", (void*)hoge_p);
    /* ���hoge_p+3���ֵ */
    printf("hoge_p..%p\n", (void*)(hoge_p + 3));

    return 0;
}