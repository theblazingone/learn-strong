#include <iostream>

using namespace std;

#define ll long long                                      //defining long long as ll to save time 


ll GCD (ll a, ll b){                                      //function for gcd
    if(b==0){                                             //if second number is zero output first
        return a;
    }
    else{ 
        return GCD(b,a%b);                                //else applying recursive gcd function 
    }
}

int main(){
    ll t,a,b;                                             //declaring variables 
    cin>>t;                                               //taking no. of inputs
    while(t--){                                           //till no. of input becomes zero
        cin>>a>>b;                                        //taking input two numbers
        cout<<GCD(a,b)<<" "<<(a*b)/GCD(a,b)<<endl;        //outputting gcd and lcm, for lcm do multiplication/gcd of them 
    }
     
    return 0;
}
