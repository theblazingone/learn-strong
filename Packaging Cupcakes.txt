#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;                                            //for no. of inputs
    while(t--){               
        int cup;                   
        long long int n;           
        cin>>n;                                        //taking the input
        cup=(n/2)+1;                                   //actually this question contradicts itself 
                                                       //"chef makes as many packages as possible"
                                                       //"chef wants to eat as many leftover cakes as possible"
                                                       //how can one maximize everything at the same time 
        cout<<cup<<endl;
    }
	
    return 0;
}
