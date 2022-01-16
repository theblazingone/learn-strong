#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                          // no. of test cases

        int n;
        cin>>n;
        int flag_1 = 0, flag_2 = 0;

        int H[n];
        for (int i=0; i<n; i++){
            cin>>H[i];
        }                                                 // take input

        if (n%2==0 || H[0]!=1){                           // if n is even or first element is not 1 directly print no 
            cout<<"no"<<endl;
        }
        else{
            for (int i=0; i<n/2; i++){                    // loop till middle element 
                if (H[i] == H[i+1] - 1){                  // checking if 1(first) = 2(second) - 1
                    flag_1++;
                }
            }
            for (int i=n/2; i<n; i++){                    // loop from middle element till n
                if (H[i] == H[i+1] + 1){                  // checking if 3(mid) = 2(mid+1) + 1
                    flag_2++;
                }
            }
            if (flag_1 == n/2 && flag_2 == n/2){          // if both counters are equal to n/2 i.e. 123 = 321
                cout<<"yes"<<endl;                        // output
            }
            else{
                cout<<"no"<<endl;
            }
        }
    }

    return 0;
}