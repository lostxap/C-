#include <iostream>
using namespace std;

int main()
{
    long long n,p,S,i;
    cin>>n;
    p = 1;
    S = 0;
    for ( i = 1 ; i<= n ; i++ ) {
        p = p * i;
        S+=p;

    }
     cout<<"Rezultatul este"<<" "<<S;
}