#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
	ll n, s=0, m=1;
	cin>>n;
	while(n>=s){
            s=pow(2, m);
	    m++;
	}
	ll A=pow(2,m-2)-1;
	ll sum=s-n;
	ll answer = A*(A+sum);
	cout<<answer<<endl; 
    }

    return 0;
}