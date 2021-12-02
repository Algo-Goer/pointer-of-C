char *arr[20];
char **parr = arr;  // 如果把arr看作指针的话，arr也是指针表达式
char *str;
str = *parr; // *parr是指针表达式
str = *(parr + 1); // *(parr + 1)是指针表达式
str = *(parr + 2); // *(parr + 2)是指针表达式