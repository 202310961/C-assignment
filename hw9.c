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
    printf("���ڿ� �Է�: ");


    char input[100];
    fgets(input, sizeof(input), stdin);

    printf("��ȯ ���: ");


    for (int i = 0; input[i] != '\0'; i++) {
        char transformed = convCase(input[i]);
        putchar(transformed);
    }

    return 0;
}