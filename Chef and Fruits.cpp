#include <iostream>

using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){                                      //total no. of test cases
    	long long n, m, k;
    	cin>>n>>m>>k;                                //taking input
    	long long ans;
    	ans = abs(n-m);                              //mod of (n-m)
    	if (ans>k){                                  //if mod is greater than coins 
    		cout<<ans-k<<endl;                   //output difference 
    	}
    	else {
    		cout<<"0"<<endl;                     //else output 0 
    	}
    }
    
    return 0;
}

