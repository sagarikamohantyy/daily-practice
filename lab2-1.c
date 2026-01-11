#include <stdio.h>
int compnum(int *, int *);
int main(){

    int a,b,compare;
    printf("Enter the first num:");
    scanf("%d", &a);
    printf("Enter the second num:");
    scanf("%d", &b); 
    compare= compnum(&a,&b); 
    printf("The greater number is %d", compare);
    return 0;
}

int compnum(int *a, int *b){
    int compare;
    if(*a>*b){
        compare= *a;
    }
    else{
        compare= *b;
    }
    return compare;
}