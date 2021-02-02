#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){                                      //taking no. of inputs 
        int k, original;
        int a=0, rem;                                //declaring variables 
        cin>>k;                                      //taking input
        original = k;                                //copying original no. in a variable 
        while(k!=0){                    
            rem = k%10;                              //before k becomes zero storing the unit digit in rem
            a = a*10 + rem;                          //adding unit digit to a, basically generating reverse of input
            k/=10;                                   //updation for the input
        }
        if (original == a){                          //if original is equal to reverse than output accordingly 
            cout<<"wins"<<endl;
        }
        else {
            cout<<"loses"<<endl;
        }
    }
    
    return 0;
}
