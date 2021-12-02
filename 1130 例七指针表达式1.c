int a, b;
int array[10];
int *pa;
pa = &a;   // &a 是一个指针表达式
int **ptr = &pa;  // &pa是一个指针表达式
*ptr = &b;  // *ptr和&b都是指针表达式
pa = array; 
pa++;        // 指针表达式