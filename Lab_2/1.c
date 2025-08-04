/*WAP to create a 1-D array of n elements and perform the following menu based operations using function.
a. insert a given element at specific position.
b. delete an element from a specific position of the array.
c. linear search to search an element
d. traversal of the array*/
#include<stdio.h>

void insert(int arr[], int *n, int pos, int elem) {
    if (pos < 0 || pos > *n) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    (*n)++;
}

void delete(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}
int linear_search(int arr[], int n, int elem) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == elem) {
            //return i;
            return printf("Element found at pos : %d",i);  
        }
    }
    return -1; 
}
void traverse(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main (){
    int arr[]={ 1,2,3,4,5};
    int i;
    int c,pos,ele;
    int n = sizeof(arr)/sizeof(arr[0]);
    printf( "Your arr elements are : \n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("Enter 1 for : Insert\n");
    printf("Enter 2 for : Delete\n");
    printf("Enter 3 for : Linear Search\n");
    printf("Enter 4 for : Traverse\n");
    printf("Enter 5 for : Exit\n");
    scanf("%d",&c);

    b:
    switch(c){
        case 1:
        printf("Enter the array position : ");
        scanf("%d",&pos);
        printf("Enter the element you want to push : ");
        scanf("%d",&ele);
        insert(arr,&n,pos,ele );
        printf( "Your arr elements are : \n");
        for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
        break;

        case 2:
        printf("Enter the position of array you want to delete : ");
        scanf("%d",&pos);
        delete(arr,&n,pos);
        printf( "Your arr elements are : \n");
        for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
        }
        break;

        case 3:
        printf("Enter the element you want to search : ");
        scanf("%d",&ele);
        linear_search(arr,n,ele);
         printf( "Your arr elements are : \n");
        for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
        break;

        case 4:
        traverse(arr,n);
        break;

        default:
        printf("Invalid input");
        break;


    } goto b;

   
}