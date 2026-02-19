#include <stdio.h>
#include <string.h>

// 自定义字符串函数声明
int my_strlen(char s[]);
void my_strcpy(char dest[], char src[]);
void my_strcat(char dest[], char src[]);
int my_strcmp(char s1[], char s2[]);

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[100];

    printf("str1 = \"%s\"\n", str1);
    printf("str2 = \"%s\"\n", str2);

    // 使用标准库
    printf("\n【标准库函数】\n");
    printf("str1长度：%zu\n", strlen(str1));
    strcpy(str3, str1);
    printf("strcpy(str3, str1) -> str3 = %s\n", str3);
    strcat(str3, " ");
    strcat(str3, str2);
    printf("strcat后：%s\n", str3);
    printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));

    // 使用自定义函数
    printf("\n【自定义函数】\n");
    printf("my_strlen(str1) = %d\n", my_strlen(str1));
    char mycopy[50];
    my_strcpy(mycopy, str1);
    printf("my_strcpy(mycopy, str1) -> mycopy = %s\n", mycopy);
    char mycat[100] = "";
    my_strcpy(mycat, str1);
    my_strcat(mycat, " ");
    my_strcat(mycat, str2);
    printf("my_strcat后：%s\n", mycat);
    printf("my_strcmp(str1, str2) = %d\n", my_strcmp(str1, str2));

    return 0;
}

// 自定义实现
int my_strlen(char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void my_strcat(char dest[], char src[]) {
    int i = my_strlen(dest);
    int j = 0;
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
}

int my_strcmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] < s2[i]) return -1;
        if (s1[i] > s2[i]) return 1;
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') return 0;
    if (s1[i] == '\0') return -1;
    return 1;
}
