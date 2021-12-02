intarray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, value;
value = array[0];   // 也可以写成：value = *array;
value = array[3];   // 也可以写成：value = *(array + 3);
value = array[4];   // 也可以写成：value = *(array + 4);
 