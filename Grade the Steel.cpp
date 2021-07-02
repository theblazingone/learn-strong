#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){                                                //no. of test cases
    	float Cc;
    	int h, s;
    	cin>>h>>Cc>>s;                                         //taking inputs
    	if (h>50 && Cc<0.7 && s>5600){                         //checking conditions
    		cout<<"10"<<endl;
    	}
    	else if (h>50 && Cc<0.7 && s<=5600){
    		cout<<"9"<<endl;
    	}
    	else if (h<=50 && Cc<0.7 && s>5600){
    		cout<<"8"<<endl;
    	}
    	else if (h>50 && Cc>=0.7 && s>5600){
    		cout<<"7"<<endl;
    	}
    	else if (h>50 || Cc<0.7 || s>5600){
    		cout<<"6"<<endl;
    	}
    	else {
    		cout<<"5"<<endl;
    	}
    }
    
    return 0;
}
