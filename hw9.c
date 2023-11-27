#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int convCase(int ch) {
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

int main(void) {
    printf("문자열 입력: ");


    char input[100];
    fgets(input, sizeof(input), stdin);

    printf("변환 결과: ");


    for (int i = 0; input[i] != '\0'; i++) {
        char transformed = convCase(input[i]);
        putchar(transformed);
    }

    return 0;
}