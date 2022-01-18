#include <iostream>

using namespace std;

int valid(string s){                                 // convert pseudo function in problem statement 
    int balance = 0;
    int max_b = 0;

    for (int i=0; i<s.length(); i++){
        if (s[i] == '('){
            balance++;
        }
        else {
            balance--;
        }
        max_b = max(max_b, balance);
    }

    return max_b;
}

int main(){

    int t;
    cin>>t;

    while (t--){                                     // no. of test cases

        string s;
        cin>>s;                                      // take input

        int pairs = valid(s);                        // pass through function

        for (int i=0; i<pairs; i++){                 // output (()) this type of sequence n no. of times i.e. 
            cout<<"(";                               // value return by function 
        }
        for (int i=0; i<pairs; i++){
            cout<<")";
        }
        cout<<endl;
    }

    return 0;
}