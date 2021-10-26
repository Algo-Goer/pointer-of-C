/*
 * @Author: your name
 * @Date: 2021-10-20 22:48:40
 * @LastEditTime: 2021-10-20 23:30:52
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \.vscode\C\1020 1-3 sizeof.c
 */
#include <stdio.h>

int main(void)
{
    printf("_Bool..%d\n", (int)sizeof(_Bool));//C99∫Û÷ß≥÷
    printf("char..%d\n", (int)sizeof(char));
    printf("short..%d\n", (int)sizeof(short));
    printf("int..%d\n", (int)sizeof(int));
    printf("long..%d\n", (int)sizeof(long));
    printf("long long ..%d\n", (int)sizeof(long long));
    printf("float..%d\n", (int)sizeof(float));
    printf("double..%d\n", (int)sizeof(double));
}