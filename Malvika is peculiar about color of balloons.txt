#include <iostream>
#include <cstring>

using namespace std;

#define ll long long 

int main() {
    ll t;
    cin>>t;
    while(t--){                                           //no. of test cases
    	char b[100];
    	cin>>b;                                           //taking in the input
    	int len=strlen(b), cnt_a=0, cnt_b=0;              //taking length of the input for the 'for' loop
    	for (int i=0; i<len; i++){
    	    if (b[i]=='a'){                               //if string has 'a' count them 
    		cnt_a++;
    	    }
    	    else{                                         //if string has 'b' count them
    		cnt_b++;
    	    }
    	}
    	if (cnt_a<cnt_b){                                 //comparing both the counts if one is less simply output it 
    	    cout<<cnt_a<<endl;
    	}
    	else{
    	    cout<<cnt_b<<endl;
    	}
    }

    return 0;
}
