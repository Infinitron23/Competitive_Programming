#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt","w", stdout);
 
	ll n;
	cin >> n;
	int sum = 0;
	int i=0;
	while(n > 0){
		int rem = n%10;
		sum += rem*pow(10,i++);
		if(sum == 1 || sum == 14 || sum == 144){
			sum = 0;
			i = 0;
		}
		n /= 10;
	}
	if(sum == 0)
		cout <<"YES"<<endl;
	else
		cout << "NO"<<endl;
	return 0;
}