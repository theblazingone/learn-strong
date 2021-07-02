#include <iostream>
#include <string>

using namespace std;

#define ll long long

int main() {
    ll t;
    cin>>t;
    while(t--){                                               //taking no. of inputs
        ll i=0, x=0, y=0;
        string s1, s2;                                        //taking input
        cin>>s1>>s2;
        while(s1[i]){                                         //till strings become NULL
            if (s1[i]=='?' || s2[i]=='?'){                    //if unidentified symbol in any of the two
                x++;                                          //count it i.e. no. of '?' symbols
            }
            else if (s1[i]!=s2[i]){                           //traversing through both the strings 
                y++;                                          //if not equal than increament no. of not equal symbols
            }
            i++;                                              //updating loop
        }
        cout<<y<<" "<<x+y<<endl;                              //output y for minimal difference and for maximum difference 
    }                                                         //output x+y i.e. total different '?' and symbols  
	
    return 0;
}
