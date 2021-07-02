#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;                                      //for no. of inputs
	while (t--){
	    int d, n;
	    cin>>d>>n;                               //taking in the input
	    long long int sum=n;                     //initializing sum with n
	    while (d--){
	        sum=((sum*(sum+1))/2);               //sum of n no. of terms while d becomes zero
	    }
	    cout<<sum<<endl;                         //outputting sum
	}
	
	return 0;
}
