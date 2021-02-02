#include <iostream>

using namespace std;

int fact(int N);                                        //decaring the function

int main() {
	int t;
	cin>>t;                                         //taking no. of inputs 
	while(t--){
	    int n, result; 
	    cin>>n;                                     //taking the input
	    result = fact(n);                           //calling the function and storing result 
	    cout<<result<<endl;                         //output
	}
	
	return 0;
}

int fact(int N){                                        //defining the function
    int f=1, i;
    for (int i=1; i<=N; i++){                           //loop for factorial of the no.
        f=f*i;
    }
    
    return f;                                           //returning the result
}
