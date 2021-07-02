#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){                                       //for no. of inputs
    	int n;
    	bool b=1;                                     //for last condition check 
    	string s;
    	cin>>n>>s;                                    //taking no. of inputs
    	for (int i=0; i<n; i++){
    		if (s[i]=='Y'){                       //condition check for not indian
    			b=0;
    			cout<<"NOT INDIAN"<<endl;
    			break;
    		}
    		else if (s[i]=='I'){                  //condition check for indian
    			b=0;
    			cout<<"INDIAN"<<endl;
    			break;
    		}
    	}
    	if (b!=0) {                                   //if bool is true
    		cout<<"NOT SURE"<<endl;
    	}
    }
    
    return 0;
}
