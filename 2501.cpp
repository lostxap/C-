#include <iostream>
#include <cmath>
using namespace std;

int main(){

    long long n,a,b,x;
    cin>>n;
    a = n*(n+1)/2;
    if(n%2==1){
        n-=1;
    }else{
        n=n;
    }
    b=(n/2)*(n/2+1);
    x=a-b;
    cout<<x;



}
