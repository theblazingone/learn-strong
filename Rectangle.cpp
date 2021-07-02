#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){                                              //taking no. of test cases
    	int a, b, c, d;
    	cin>>a>>b>>c>>d;                                     //taking input
    	if (a==b && b==c && c==d){                           //for test cases like 2, 2, 2, 2
    		cout<<"YES"<<endl;
    	}
    	else if (a==b && c==d && b!=c){                      //for test cases like 2, 2, 3, 3
    		cout<<"YES"<<endl;
    	}
    	else if (a==c && b==d && b!=c){                      //for test cases like 3, 2, 3, 2 
    		cout<<"YES"<<endl;
    	}
    	else if (a==d && b==c && a!=b){                      //for test cases like 3, 2, 2, 3
    		cout<<"YES"<<endl;
    	}
    	else {                                               //for all other test cases
    		cout<<"NO"<<endl;
    	}
    }

    return 0;
}
