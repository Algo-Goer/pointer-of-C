/* 
* 2021-10-28  
�ú�����Ӣ����ı��ļ��н�����һ������ȡ���� 
��C�����У��޷���������Ϊ�������������ݣ�������ͨ������ָ���ʼԪ�ص�ָ�����ﵽ��������Ϊ�������ݵ�Ч��
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int get_word(char *buf, int buf_size, FILE *fp) // get_word()�����Ƕ�ָ������buf�ĳ�ʼԪ�ص�ָ�����ֵ����
{
    int len;
    int ch;

    /* �����հ��ַ� */
    while ((ch = getc(fp)) != EOF && !isalnum(ch)) //isalnum(ch)����ַ����Ƿ�����ĸ���������
        ;

    if (ch == EOF)
        return EOF;

    /* ch��ŵ�������ĸ */
    len = 0;
    do
    {
        buf[len] = ch;  //buf[len]��*(buf+len)���﷨��
        len++;
        if (len >= buf_size)
        {
            /* ���ʹ������� */
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