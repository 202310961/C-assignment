#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void twojinsu(int n) {
    if (n > 0) {
        twojinsu(n / 2); 
        printf("%d", n % 2); 
    }
}

int main() {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("���� ������ �Է����ּ���");
        return 0;
        
    }
    else if (num == 0) {
        printf("0\n");
    }
    else {
        twojinsu(num);
     
    }

    return 0;
}






