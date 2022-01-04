#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                      // no. of test cases 

        int n;
        cin>>n;

        string A[n], B[n];
        int C[n] = {0};                               // temp array 
        for (int i=0; i<n; i++){        
            cin>>A[i];                                // inputs for first name
            cin>>B[i];                                // inputs for last name
        }

        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if ( i!=j && A[i] == A[j]){           // i should not be equal to j because name will not be compared to itself 
                    C[i] = 1;                         // and one name should be compared to every other name except itself.
                }
            }
        }

        for (int i=0; i<n; i++){
            if (C[i] == 1){                           // if temp array has 1 then output full name 
                cout<<A[i]<<" "<<B[i]<<endl;
            }
            else{
                cout<<A[i]<<endl;                     // else output first name only
            } 
        }
    }

    return 0;
}