struct MyStruct
{
    int a;
    int b;
    int c;
}
struct MyStruct ss = {20, 30, 40};
// 声明了结构对象ss，并把ss的成员初始化为20、30和40
struct MyStruct *ptr = &ss;
// 声明了一个指向结构对象ss的指针，它的类型是MyStruct *，指向的类型是MyStruct
int *pstr = (int*)&ss;  
// 声明了一个指向结构对象ss的指针。但是pstr和它被指向的类型ptr不同
