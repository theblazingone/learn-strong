#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;  
    while(t--){                                       //taking no. of inputs 
  	int a, b, min=0;                              //declaring variables for input
  	cin>>a>>b;
  	if (a>b){                                     //checking conditions
  		cout<<a;
  	}
  	else{
  		cout<<b;
  	}
  	cout<<" "<<a+b<<endl;                         //giving output 
    }
  	
    return 0;
}
