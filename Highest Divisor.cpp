#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin>>n;                                        //take input
    for (int i=10; i>=1; i--){                     //loop from highest divisor i.e. 10
        if (n%i==0){                               //if divisible by i 
            cout<<i<<endl;                         //give output
            break;
        }
    }

    return 0;
}
