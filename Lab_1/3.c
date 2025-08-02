#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int emp_id;
    char name[50];
    char designation[50];
    int basic_salary;
    int hra;
    int da;
} emp;

int main(){
    int i, n;
    printf("Enter no. of employees : ");
    scanf("%d", &n);

    emp *employee = (emp*)malloc(n * sizeof(emp));
    if (employee == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i = 0; i < n; i++){
        printf("Enter employee %d information\n", i + 1);
        printf("Enter name : ");
        scanf("%s", employee[i].name);
        printf("Enter employee id : ");
        scanf("%d", &employee[i].emp_id);
        printf("Enter designation : ");
        scanf("%s", employee[i].designation);
        printf("Enter Basic salary : ");
        scanf("%d", &employee[i].basic_salary);
        printf("Enter hra : ");
        scanf("%d", &employee[i].hra);
        printf("Enter da : ");
        scanf("%d", &employee[i].da);
    }

    for(i = 0; i < n; i++){
        printf("\nEmployee information : %d\n", i + 1);
        printf("Name : %s\nDesignation : %s\nBasic salary : %d\nHRA : %d\nDA : %d\n",
            employee[i].name, employee[i].designation, employee[i].basic_salary, employee[i].hra, employee[i].da);
    }
}