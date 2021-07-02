#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){                                 //for no. of test cases
    	int num;
    	cin>>num;                               //taking input
    	if (num%10==0){                         //if already divisible by 10 output '0'
    	    cout<<"0"<<endl;
    	}
    	else if (num%5==0){                     //if divisible by 5, only '1' time multiplication will give divisibility by 2
    	    cout<<"1"<<endl;
    	}
    	else {                                  //else all cases will not be able to give divisibility by 10
    	    cout<<"-1"<<endl;
    	}
    }
    
    return 0;
}
