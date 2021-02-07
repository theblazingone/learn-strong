#include <iostream>
#include <iomanip>

using namespace std;

#define ll long long
#define d double                                        //to write less :)
 
int main(){                                            
    ll t;
    cin>>t;
    while(t--){                                         //taking no. of inputs
        d basic, gross;
        cin>>basic;                                     //taking input
        if (basic<1500){
            gross = basic*0.1 + basic*0.9 + basic;      //implementing basic arithmetic 
        }
        else {
            gross = 500 + basic*0.98 + basic;
        }
        cout<<fixed;
        cout<<setprecision(2)<<gross<<endl;             //for precision 
    }

    return 0;
}
