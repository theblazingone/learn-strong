#include <iostream>
#include <cmath>

using namespace std;

#define ll long long 

int main() {
    ll t;
    cin>>t;
    while(t--){                                           //no. of test cases
    	ll n, ans;
    	cin>>n;                                           //according to the question h(h+1)/2 <= n
    	ans = (((int)sqrt(1+8.0*n))-1)/2;                 //solving the above quadratic with quadratic formula 
    	cout<<ans<<endl;
    }

    return 0;
}
