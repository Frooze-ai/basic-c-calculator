#include <stdio.h>
#include <string.h>

int main() {
    char lang[3];
    char op;
    float num1, num2, result;

    printf("Dil seçiniz! / Select language! (TR/EN): ");
    scanf("%s", lang);

    if (strcmp(lang, "TR") == 0) {
        printf("Hesap Makinesine hoş geldiniz.\n");
        printf("Yapmak istediğiniz işlemi giriniz. (+, -, *, /): ");
        scanf(" %c", &op);
        printf("İlk sayıyı giriniz: ");
        scanf("%f", &num1);
        printf("İkinci sayıyı giriniz: ");
        scanf("%f", &num2);
        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                printf("Geçersiz işlem!\n");
                return 0;
        }
        printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);
    } else if (strcmp(lang, "EN") == 0) {
        printf("Welcome to the calculator.\n");
        printf("Enter the operation. (+, -, *, /): ");
        scanf(" %c", &op);
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                printf("Invalid operation!\n");
                return 0;
        }
        printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);
    } else {
        printf("Geçersiz dil seçimi! / Invalid language selection!\n");
        return 0;
    }

    return 0;
}