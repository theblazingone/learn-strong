#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){                                            // no. of test cases
	    int flag=0;
	    string s;
	    cin>>s;                                            // inputs
	    
	    for (int i=0; i<s.length(); i+=2){                 // loop till string length and incrementing by 2
	        if (s[i] == 'A' && s[i+1] != 'B'){             // if A 2 times
	            flag=1;
	            break;
	        }
	        else if (s[i] == 'B' && s[i+1] != 'A'){        // if B 2 times
	            flag=1;
	            break;
	        }
	    }
	    
	    if (flag == 1){                                    // if 1 output no
	        cout<<"no"<<endl;
	    }
	    else{
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}
