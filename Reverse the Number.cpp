#include <iostream>

using namespace std;

int main() {
    int t, cnt=0;
    int num;
    cin>>t;                                //taking no. of inputs
    while(t--){
    	cin>>num;                          //taking input
    	int rem, rev=0;
    	while (num!=0){                    
    		rem = num%10;              //reversing the no. by storing unit digit after updating the no.
    		rev = rev*10+rem;          //remainder is added in the reverse no. i.e. unit digit of the no.
    		num/=10;                   //updation for the no. by taking quotient and leaving unit digit in the remainder
    	}
    	cout<<rev<<endl;                   //outputting the reverse no.
    }

    return 0;
}
