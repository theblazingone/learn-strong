#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){                                                    //taking no. of inputs
        double i, p;                                               //taking item and prices for it respectively
        cin>>i>>p;
        if (i>1000){                                               //if item are greater than 1000
            cout<<fixed;
            cout<<setprecision(6)<<i*p*0.9<<endl;                  //for this we have discount of 10% that is
                                                                   //total we have to return 90% of the price
        }
        else {
            cout<<fixed;
            cout<<setprecision(6)<<i*p<<endl;                      //if item is less than 1000 than simply print i*p
        }
    }
    
    return 0;
}
