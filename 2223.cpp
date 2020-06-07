#include <iostream>
using namespace std;
int n , d;
long long s = 0;
int main()
{
    cin >> n;
    for(d=1 ; d*d<n ; d++)
    if(n % d == 0)
    s = s + d + n / d;
    if(d * d == n)
    s = s + d;
    cout << s;
    return 0;
}
