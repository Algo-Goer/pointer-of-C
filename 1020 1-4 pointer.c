/*
 * @Author: your name
 * @Date: 2021-10-20 23:15:31
 * @LastEditTime: 2021-10-20 23:39:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \.vscode\C\1020 1-4 pointer.c
 */
#include <stdio.h>

int main(void)
{
    int hoge = 5;
    int piyo = 10;
    int *hoge_p;  //��ָ��int��ָ�롱���͵ı���hoge_p

    /* �����������ַ */
    printf("&hoge..%p\n", (void *)&hoge); //����%pҪ���յ���
    printf("&piyo..%p\n", (void *)&piyo);
    printf("&hoge_p..%p\n", (void *)&hoge_p);

    /* ��hoge�ĵ�ַ����ָ�����hoge_p */
    hoge_p = &hoge;
    printf("hoge_p..%p\n", (void *)hoge_p);

    /* ͨ��hoge_p���hogeֵ */
    printf("*hoge_p..%d\n", *hoge_p);

    /* ͨ��hoge_p����hogeֵ */
    *hoge_p = 10;
    printf("hoge..%d\n", hoge);

    return 0;
}