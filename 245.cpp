#include <iostream>
using namespace std;
int n ,i, d, nr, maxx=-1, m, p;
long long s;
int main()
{
cin >> m;
for(i=1;i<=m;i++)
{
  n=i;
  nr=0;
  for(d = 1 ; d * d < n ; d++)
    cout<<d<<" ";

   if(n % d == 0)
     nr++;
             nr = nr * 2;
             if(d * d == n)
        nr = nr + 1;

if(nr>maxx) maxx = nr, p = i;
}
cout<<p;
return 0;
}

