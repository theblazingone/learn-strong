#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t; 
    while(t--){                                                     // no. of test cases

        int n, flag=1;
        cin>>n;
        int A[n];

        for (int i=0; i<n; i++){                                    // take input
            cin>>A[i];
        }

        int p1=0, p2=n-1;                                           // pointers to iterate over array from bkwd and fwd
        if (A[p1]!=1){                                              // array's first element if not equal to 1 
            flag=0;                                                 // it's not a rainbow
        }
        else{
            while(p1<p2){                                     
                if (A[p1]!=A[p2]){                                  // palindrome condition for array
                    flag=0;
                    break;
                }
                if (A[p1]!=A[p1+1] && A[p1]+1!=A[p1+1]){            // check if first element is not equal to second and 
                                                                    // first + 1 should not be equal to second
                    flag=0;
                    break;
                }
                p1+=1;                                              // fwd pointer + 1
                p2-=1;                                              // bkwd pointer - 1
            }
            if (A[p1]!=7){                                          // when p1 = p2 check A[p1] == 7 if no flag=0
                flag=0;
            }
        }
        if (flag==1){                                               // final condition check
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}