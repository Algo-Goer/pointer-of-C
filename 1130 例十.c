char *str[3] = {
    "Hello, thhisisasample!",
    "Hi, goodmorning.",
    "Helloworld"
};
chars[80];
strcpy(s, str[0]);   // 也可以写成strcpy(s, *str);
strcpy(s, str[1]);   // 也可以写成strcpy(s, *(str+1));
strcpy(s, str[2]);   // 也可以写成strcpy(s, *(str+2));