#include <stdio.h>
 struct Complex {
    int real;
    int imag;
 };
 struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
 }
 void multiplyComplex(struct Complex *a, struct Complex *b, struct Complex *result) {
    result->real = (a->real * b->real) - (a->imag * b->imag);
    result->imag = (a->real * b->imag) + (a->imag * b->real);
 }
 int main() {
    struct Complex c1, c2, result;
    int choice;
    printf("Enter complex number 1: ");
    scanf("%d %d", &c1.real, &c1.imag);
    printf("Enter complex number 2: ");
    scanf("%d %d", &c2.real, &c2.imag);
    do {
        printf("\nMENU\n1. addition\n2. multiplication\n3. exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                result = addComplex(c1, c2);
                printf("Sum = %d+%di\n", result.real, result.imag);
                break;
            case 2:
                multiplyComplex(&c1, &c2, &result);
                printf("Product = %d+%di\n", result.real, result.imag);
                break;
            case 3:
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);
    return 0;
 }
