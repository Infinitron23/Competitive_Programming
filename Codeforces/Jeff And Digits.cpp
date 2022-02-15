#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)
#define endl "\n";

int main(){

       int N;
       cin>>N;
       int count5 = 0, count0=0;
       for(int i=0; i<N; i++){
           int num;
           cin>>num;
           if(num == 0) count0++;
           if(num == 5) count5++;
       }
       if(count0 == 0) cout << -1;
       else {
           int max5 = count5 - (count5 % 9);
           if(max5 == 0){
               cout << 0;
               return 0;
           }
           vector<int> val;
           for(int i=0; i < max5; i++) val.push_back(5);
           for(int i=0; i < count0; i++) val.push_back(0);
           for(int i=0; i < val.size(); i++) cout<<val[i];
       }
   return 0;
}