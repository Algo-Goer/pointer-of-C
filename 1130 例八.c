char *arr[20];
char **parr = arr;  // �����arr����ָ��Ļ���arrҲ��ָ����ʽ
char *str;
str = *parr; // *parr��ָ����ʽ
str = *(parr + 1); // *(parr + 1)��ָ����ʽ
str = *(parr + 2); // *(parr + 2)��ָ����ʽ