struct MyStruct
{
    int a;
    int b;
    int c;
}
struct MyStruct ss = {20, 30, 40};
// �����˽ṹ����ss������ss�ĳ�Ա��ʼ��Ϊ20��30��40
struct MyStruct *ptr = &ss;
// ������һ��ָ��ṹ����ss��ָ�룬����������MyStruct *��ָ���������MyStruct
int *pstr = (int*)&ss;  
// ������һ��ָ��ṹ����ss��ָ�롣����pstr������ָ�������ptr��ͬ
