#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    cin.tie(NULL);                               // https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull

    int t;
    cin>>t;

    while (t--){                                 // no. of test cases 

        int n, flag=0;
        cin>>n;
        string s, r;
        cin>>s>>r;                               // take input

        sort(s.begin(), s.end());                // simple sort both strings
        sort(r.begin(), r.end());

        if (s==r){                               // check if two strings are equal 
            cout<<"YES"<<endl;                   // output
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}