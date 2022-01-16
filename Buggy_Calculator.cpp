#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    
    while (t--){                                            // no. of test cases
        
        int a, b;
        cin>>a>>b;
        int sum = a+b;                                      // take input and do actual sum

        int i=10;                                           // start i with 10, we just have to subtract multiples of 10
        while (a && b){
            if ((a%10)+(b%10) >= 10){                       // check if unit digits's sum is >= 10
                sum -= i;                                   // if true subtract 10 from it
            }
            a/=10;                                          // remove unit digit from number
            b/=10;
            i*=10;                                          // update i with multiple of 10
        }
        cout<<sum<<endl;                                    // output
    }

    return 0;
}