#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)
#define endl "\n";

int main(){

       int T;
       cin>>T;
       while (T--)
       {
           int i, cca=0, cch=0;
           ll X;
           string S;
           cin>>X>>S;
           rep(i, S.length()){
               if(S[i] == 'C')
               cca += 2;
               else if(S[i] == 'N')
               cch += 2;
               else{
                   cca++;
                   cch++;
               }
           }
           if(cca > cch){
               cout<<X*60<<endl;
           }
           else if(cca == cch){
               cout<<55*X<<endl;
           }
           else{
               cout<<40*X<<endl;
           }
       }
       
   return 0;
}