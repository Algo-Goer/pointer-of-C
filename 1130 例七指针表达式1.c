int a, b;
int array[10];
int *pa;
pa = &a;   // &a ��һ��ָ����ʽ
int **ptr = &pa;  // &pa��һ��ָ����ʽ
*ptr = &b;  // *ptr��&b����ָ����ʽ
pa = array; 
pa++;        // ָ����ʽ