#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;  
    while(t--){                                                   //for no. of inputs
  	int n;
  	cin>>n;                                                   //taking input
        if (n<10){                                                //condition check and outputting 
        	cout<<"Thanks for helping Chef!"<<endl;
        }
        else{
        	cout<<"-1"<<endl;
        }
    }
   	
    return 0;
}
