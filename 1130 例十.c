char *str[3] = {
    "Hello, thhisisasample!",
    "Hi, goodmorning.",
    "Helloworld"
};
chars[80];
strcpy(s, str[0]);   // Ҳ����д��strcpy(s, *str);
strcpy(s, str[1]);   // Ҳ����д��strcpy(s, *(str+1));
strcpy(s, str[2]);   // Ҳ����д��strcpy(s, *(str+2));