/* 
* 2021-10-28  
用函数从英语的文本文件中将单词一个个读取出来 
在C语言中，无法将数组作为函数参数来传递，但可以通过传递指向初始元素的指针来达到将数组作为参数传递的效果
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int get_word(char *buf, int buf_size, FILE *fp) // get_word()代码是对指向数组buf的初始元素的指针进行值传递
{
    int len;
    int ch;

    /* 跳过空白字符 */
    while ((ch = getc(fp)) != EOF && !isalnum(ch)) //isalnum(ch)检测字符串是否由字母和数字组成
        ;

    if (ch == EOF)
        return EOF;

    /* ch存放单词首字母 */
    len = 0;
    do
    {
        buf[len] = ch;  //buf[len]是*(buf+len)的语法糖
        len++;
        if (len >= buf_size)
        {
            /* 单词过长报错 */
            fprintf(stderr, "word too long.\n");
            exit(1);
        }
    } while ((ch = getc(fp)) != EOF && isalnum(ch));

    buf[len] = '\0';

    return len;
}

int main(void)
{
    char buf[256];

    while (get_word(buf, 256, stdin) != EOF)
    {
        printf("<<%s>>\n", buf);
    }

    return 0;
}