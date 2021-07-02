#include <iostream>

using namespace std;

#define ll long long 

int main() {
    ll t;
    cin>>t;
    while(t--){                                                                   //no. of test cases
    	ll n;
    	cin>>n;                                                                   //taking in the input
    	if (n==2010 || n==2015 || n==2016 || n==2017 || n==2019){                 //simple condition check 
    		cout<<"HOSTED"<<endl;                                             //output
    	}
    	else{
    		cout<<"NOT HOSTED"<<endl;                                         //output
    	}
    }

    return 0;
}
