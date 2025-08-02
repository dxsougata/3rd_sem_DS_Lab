#include<stdio.h>


int funcComp(int *x, int *y) {
    if (*x > *y) {
        printf("%d is bigger than %d\n", *x, *y);
        return 1;
    }
    if (*x == *y) {
        printf("Both numbers are same\n");
        return 0;
    } else {
        printf("%d is smaller than %d\n", *x, *y);
        return -1;
    }
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    funcComp(&x, &y);
}