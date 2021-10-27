#include <stdio.h>

int main(void) 
{
    int array[5]; //将array声明为数组类型的变量
    int i;

    /* 对数组array设置值 */
    for (i = 0; i < 5; i++) 
    {
        array[i] = i;  //对array各元素设置值
    }

    /* 输出其内容 */
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }

    /* 输出array中各元素地址 */
    for (i = 0; i < 5; i++)
    {
        printf("&array[%d]...%p\n", i, (void*)&array[i]);  //从运行结果可看出，每个地址之间间隔为4 bytes，刚好是int的长度
    }

    return 0;
}