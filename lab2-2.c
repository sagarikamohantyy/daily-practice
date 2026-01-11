
#include <stdio.h>
#include <stdlib.h>

int main()
{  
    int *arr=(int*)malloc(5*4);
    if(arr=NULL){
        printf("Memory is FULL");
    }
    for(int i=0;i<5;i++){
        printf("enter the number");
        scanf("%d",&arr[i]);
        int f=0;
        for(int j=1;j<= arr[i];j++){
            if (arr[i]%j==0)
            f++;
        }
        if(f==2){
            printf("\n%d is a prime number\t", arr[i]);
            } 
    }
}