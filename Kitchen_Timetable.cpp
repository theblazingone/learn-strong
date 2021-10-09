#include <iostream>

using namespace std;

int main(){
    int A[10011];                                // initialize variables
    int t;
    cin>> t;
    while(t--){                                  // no. of test cases
    	int N, count=0;
    	cin>> N;                                 // take input
    	A[0] = 0; 
    	for (int i=1; i<=N; i++){
            cin>> A[i];
    	}
    	for (int i=1; i<=N; i++){
    	    int B;
    	    cin>> B;
    	    if (B <=A[i]-A[i-1]){                // difference between timing must be 
			                                     // equal to student's timing 
    		count++;
    	    }
        }
        cout<<count<<endl;
    }

    return 0;
}
