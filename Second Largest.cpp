#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;  
    while(t--){                                              //taking no. of inputs
  	long long a,b,c;
	cin>>a>>b>>c;                                        //taking inputs
	if(a>=b && b>=c || a<=b && b<=c){                    //simple logic for second greatest among 3 nos.
		cout<<b<<endl; 
	}
	else if(a>=c && c>=b || a<=c && b>=c){               //dry run the if-else statements for proper understanding 
		cout<<c<<endl;
	}
	else{
		cout<<a<<endl;
	}
    }

    return 0;
}
