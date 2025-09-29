#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("사용법: %s 숫자1 숫자2 연산자(+,-,*,/)\n", argv[0]);
        return 1;
    }

    double a = atof(argv[1]); // 문자열 -> 실수
    double b = atof(argv[2]);
    char op = argv[3][0];

    switch(op) {
        case '+': printf("%.2f\n", a + b); break;
        case '-': printf("%.2f\n", a - b); break;
        case '*': printf("%.2f\n", a * b); break;
        case '/': 
            if (b == 0) {
                printf("0으로 나눌 수 없습니다.\n");
                return 1;
            }
            printf("%.2f\n", a / b); 
            break;
        default: printf("잘못된 연산자입니다.\n"); return 1;
    }

    return 0;
}
