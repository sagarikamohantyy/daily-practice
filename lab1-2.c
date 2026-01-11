////implement the concept of call by reference using pointer of a function(swap the element)
#include<stdio.h>
int swap(int*a, int*b);
int main(){
    int p,q;
    printf("enter p:");
    scanf("%d",&p);
    printf("enter q:");
    scanf("%d",&q);
    int(*x)(int*,int*)= swap;
    printf("the value of a: %d\n",q);
    printf("the value of b: %d\n",p);
    return 0;
}
int swap(int*a, int*b){
    int c=*a;
    *a=*b;
    *b=c;
}