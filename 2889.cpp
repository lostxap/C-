#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int r;
    long double pi , P ,S;
    cin>>r;
    pi=3.14159265359;
    S = pow(r,2)*pi;
    P = 2*r*pi;
    cout<<S<<" "<<P;
}
