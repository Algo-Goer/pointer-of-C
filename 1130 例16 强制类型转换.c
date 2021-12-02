void fun(char *);
int a = 125, b;
fun((char *)&a);
void fun(char *s)
{
    char c;
    c = *(s + 3); *(s + 3) = *(s + 0); *(s + 0) = c;
    c = *(s + 2); *(s + 2) = *(s + 1); *(s + 1) = c;
}
