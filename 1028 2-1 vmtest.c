#include <stdio.h>

int hoge;

int main(void)
{
    char buf[256];

    printf("&hoge...%p\n", (void*)&hoge); // ���ȫ�ֱ���hoge�ĵ�ַ

    printf("Input initial value:\n");
    fgets(buf, sizeof(buf), stdin); // fgets() �������ȴ������ֹͣ״̬
    sscanf(buf, "%d", &hoge);

    for (;;) 
    {
        printf("hoge..%d\n", hoge);
        /*
        * ʹ��getchar()����ȴ������״̬
        * ÿ�û�һ�λس�����hogeֵ����
        */
        getchar();
        hoge++;
    }

    return 0;
}