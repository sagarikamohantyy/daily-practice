#include<stdio.h>
struct node{
    int coeff;
    int exp;
    struct node *next;
};
if (poly1>poly2){
    poly-> coeff= poly1->coeff;
    poly-> exp= poly1 = exp;
    poly1=poly1->next;
}
else if(poly2->poly1->exp){
    poly2=poly2->next;
}
else(poly2->exp=poly1->exp){
    poly-> exp= poly1 = exp;
    poly->coeff=poly1-> coeff+poly2->coeff;
    poly=poly2->next;
}