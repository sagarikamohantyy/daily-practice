#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Entera number:"<< endl;
    cin>> n;

    int i=1;
    int sum=0;
    while(i<=n){
        sum= sum+i;
        i=i+1;
    }
    cout<< "Vaalue of the sum of 1st "<< n<< "numbers is "<< sum<< endl;
    return 0;}