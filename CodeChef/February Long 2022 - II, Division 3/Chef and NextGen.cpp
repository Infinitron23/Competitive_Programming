#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";

int main(){

       int T;
       cin>>T;
       while (T--)
       {
           ll A,B,X,Y;
           cin>>A>>B>>X>>Y;
           ll req = A*B;
           ll tot = X*Y;
           if(req <= tot){
               cout<<"Yes"<<endl;
           }
           else cout<<"No"<<endl;
       }
       
   return 0;
}