#include <iostream>

using namespace std;

int main()
{
   int n,c=0,s=0,x,i=1, j=1, k=0,m;
   cin>>n;
   int a = n;
   int l = a;

   // n este numarul citit si a este clona lui n

 while(n!=0){
    n=n/10;
    c++;
   }

   // c stocheaza nr de cifre al lui n

   for(i; i<=c ; i++){
    x=a%10;
    s= s+x;
    a = a/10;

    }

    int z= s;

   // s stocheaza suma cifrelor lui a sau n


   for(j; j<=c ; j++){
    m = l%10;
    int r = z-m;
    if(r%3==0){
        k++;
    }
    r = 0;
    l=l/10;



   }

   /* din suma se scade de fiecare data un m ,
    care este ultima cifra a lui n , iar n devine n/10 de fiecare data
     */

   cout<<k;
}
