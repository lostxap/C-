#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int p,s,n;
    s = 0;
    p=1;
    cin >> n;
    for(int i=1 ; i<=n; i++){
        p=pow(i,4);
        s=s+p;


    }
    cout<<s%10;

}
