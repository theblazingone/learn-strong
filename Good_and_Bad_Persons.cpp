#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                         // no. of test cases

        int n, k, cnt_up=0, cnt_down=0;
        cin>>n>>k;
        string s;
        cin>>s;

        for (int i=0; i<s.length(); i++){                // calculate total uppercase and lowercase characters 
            if (s[i] >= 'A' && s[i] <= 'Z'){
                cnt_up++;
            }
            else{
                cnt_down++;
            }
        }
        
        if (cnt_up <= k && cnt_down > k){                // if uppercase is less than k and lowercase is greater than k
            cout<<"chef"<<endl;                          // chef is output 
        }
        else if (cnt_down <= k && cnt_up > k){           // if lowercase is less than k and uppercase is greater than k
            cout<<"brother"<<endl;                       // brother is output 
        }
        else if (cnt_up <= k && cnt_down <= k){          // if both are less than k than both is output
            cout<<"both"<<endl;
        }
        else{                                            // otherwise it's none
            cout<<"none"<<endl;
        }
    }

    return 0;
}