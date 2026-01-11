//implement the concept of pointers to an array and array of pointers(where "n" is user input)
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    int(*a)[n]=&arr;
    for (int i=0;i<n;i++){
        printf("Enter elements:");
        scanf("%d\n", &(*a)[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
    return 0;

}
