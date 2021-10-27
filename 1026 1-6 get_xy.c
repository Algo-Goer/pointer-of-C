/* ��main()�����ı���x��y�ĵ�ַ���ݸ��˺���get_xy()��Ȼ��get_xy()��ֵ���浽����������ַ�� */
#include <stdio.h>

void get_xy(double *x_p, double *y_p)
{
    /* ����β�x_p��y_p��ֵ����ַ */
    printf("x_p..%p, y_p..%p\n", (void*)x_p, (void*)y_p);
    printf("&x_p..%p, &y_p..%p\n", (void*)&x_p, (void*)&y_p);

    /* ��ֵ���浽�Բ������ݽ����ĵ�ַ�� */
    *x_p = 1.0;
    *y_p = 2.0;
}

int main(void)
{
    double x;
    double y;

    /* �������x��y�ĵ�ַ */
    printf("&x..%p, &y..%p\n", (void*)&x, (void*)&y);

    /*
     * ������x��y�ĵ�ַ��Ϊ��������
     * get_xy()��ֵ���浽��������ַ��
     */
    get_xy(&x, &y);

    /* ������յ�ֵ */
    printf("x..%f, y..%f\n", x, y);

    return 0;
}
