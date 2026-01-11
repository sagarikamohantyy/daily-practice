#include <stdio.h>

int main(){
    int num, re;
    printf("Enter the number you want multiplication table of:");
    scanf("%d", &num);

    for(int i=1; i<=10; i++){
        re= num*i;
        printf("%d x %d = %d\n", num, i, re );
    }
    return 0;
}