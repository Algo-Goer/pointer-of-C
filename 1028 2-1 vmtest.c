#include <stdio.h>

int hoge;

int main(void)
{
    char buf[256];

    printf("&hoge...%p\n", (void*)&hoge); // 输出全局变量hoge的地址

    printf("Input initial value:\n");
    fgets(buf, sizeof(buf), stdin); // fgets() 程序进入等待输入的停止状态
    sscanf(buf, "%d", &hoge);

    for (;;) 
    {
        printf("hoge..%d\n", hoge);
        /*
        * 使用getchar()进入等待输入的状态
        * 每敲击一次回车键，hoge值增加
        */
        getchar();
        hoge++;
    }

    return 0;
}