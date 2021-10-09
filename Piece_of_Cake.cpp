#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){                                       // no. of test cases
    	string s;
    	cin>>s;
    	ll n = s.length();
    	ll cnt=1;
    	if (n%2!=0){                                  // checking condition
    	    cout<<"NO"<<endl;                         // eliminating strings having odd no. of characters
    	}
    	else{
    	    sort(s.begin(), s.end());                 // sorting strings
    	    for (int i=0; i<n-1; i++){
				if (s[i]==s[i+1]){                    // if one occurance is same to next one
				    cnt++;                            // increase count
				}
				else{                                 // if not occurance of that character is 1 time only
				    cnt=1;
				}
				if ((cnt==n/2) && (s[i]!=s[i+2])){        // if count is equal to length(string)/2 and 
				    break;                                // first occurance is not equal to third break
    	        }
    	    }
    	    if (cnt==n/2){                            // output
    	    	cout<<"YES"<<endl;
    	    }
    	    else{
    	    	cout<<"NO"<<endl;
    	    }
    	}
    }

    return 0;
}