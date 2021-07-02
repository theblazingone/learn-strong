#include <iostream>

using namespace std;

string prime(int k);                                  //declaring the function
 
int main(){                                            
    int t;
    cin>>t;                                           //taking no. of inputs
    while(t--){ 
        int k;
        cin>>k;                                       //taking the input
        cout<<prime(k)<<endl;                         //passing input in the function and outputting it
    }

    return 0;
}

string prime(int k){                                  //defining the function
    if (k==0 || k==1){                                //if input is 0 or 1 simply return  no
            return "no";
    }
    else {
        for (int i=2; i<=k/2; ++i)                    //else check condition for prime using loop
                                                      //why use k/2? shortest way to check for k%i==0
            if (k%i==0){
                return "no";
                break;
            }
    }

    return "yes";                                     //if both the conditions deny the no. being not prime
}
