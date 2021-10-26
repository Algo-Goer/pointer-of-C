/*示例程序最终向hoge_p加了4，违反标准，哪怕最后并没有通过该指针进行内存访问。但能运行。

对于指针的加减运算，标准只允许指针指向数组元素，或超过数组末尾1个元素的位置，并且加减运算的结果也指向
数组元素，或超过数组末尾1个元素的位置。
*/
#include <stdio.h>

int main(void)
{
    int hoge;
    int *hoge_p;

    /* 将指向hoge的指针赋给hoge_p */
    hoge_p = &hoge;
    /* 输出hoge_p值 */
    printf("hoge_p..%p\n", (void*)hoge_p);
    /* hoge_p + 1 */
    hoge_p++; 
    /* 输出hoge_p值 */
    printf("hoge_p..%p\n", (void*)hoge_p);
    /* 输出hoge_p+3后的值 */
    printf("hoge_p..%p\n", (void*)(hoge_p + 3));

    return 0;
}