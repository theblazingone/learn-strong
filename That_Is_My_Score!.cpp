#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){                                // no. of test cases 

        int n, total_score = 0;
        cin>>n;

        int A[11];

        for (int i=0; i<11; i++){              // array of scores initializing with 0
            A[i] = 0;
        }

        while(n--){                            // until all the test cases for no. of attempts
            int a, b;
            cin>>a>>b;  
            
            if (a>=1 && a<=8){                 // if 1 to 8 is the question number 
                if (A[a-1] < b){               // store the maximum out of every attempt of a single question
                    A[a-1] = b;
                }
            }
            else {                             // else score is considered 0
                A[a-1] = 0;
            }
        }

        for (int i=0; i<11; i++){              // sum 
            total_score += A[i];
        }

        cout<<total_score<<endl;               // output 

    }

    return 0;
}