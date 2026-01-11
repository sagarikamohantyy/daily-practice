#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter a number:"<< endl;
    cin>>n;
    int i=1;
    while(i<=n){
        if(n%i==0 && (i==1|| i==n)){
            i++;
            continue;
        }
        else if(n%i==0 && (i!=1|| i!=n)){
            cout<<n<< " is not a prime number"<< endl;
            break;
        }
        else{
            cout<<n<< " is a prime number"<< endl;
            break;
        }
        i++;    
    } 
    return 0;
}