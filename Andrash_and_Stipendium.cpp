#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                   // no. of test cases

        int n, temp=0, full=0;
        cin>>n;
        int Examinations[n], sum=0;
        for (int i=0; i<n; i++){
            cin>>Examinations[i];                  // take inputs
            sum += Examinations[i];                // sum all the marks
            if (Examinations[i] == 2){             // if any marks are 2
                temp = 1;                          // temp = 1
            }
            if (Examinations[i] == 5){             // check for 5 marks
                full++;
            }
        }

        if (temp==1 || sum<4*n || !full){          // temp should be 1 or sum should be less than 4*n or zero 5s
            cout<<"No"<<endl;                      // don't compare double to double it will give error 
        }                                          // therefore instead of avg < 4.0 go for sum<4*n
        else {
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}