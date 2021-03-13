#include <iostream>
#include <cstring>

using namespace std;

#define ll long long 

int main() {
    ll t;
    cin>>t;
    while(t--){                                           //no. of test cases
    	int flag=0;
    	char a[10], b[10];
    	cin>>a>>b;                                        //taking the input
    	int n= strlen(a);                                 //determining length of string 'sizeof gives max. value i.e. 10'
    	for (int i=0; i<n; i++){
    	    if (a[i]=='?' || b[i]=='?'){                  //if either of them has '?'
    		flag=1;
    	    }
    	    else if (a[i]==b[i]){                         //if both characters are equal
    		flag=1;
    	    }
    	    else{                                         //if above two conditions are false  
    		flag=0;
    		break;
    	    }
    	}
    	if (flag==1){                                     //output if flag==1
    		cout<<"Yes"<<endl;
    	}
    	else{                                             //output if not
    		cout<<"No"<<endl;
    	}
    }

    return 0;
}
