#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                          // no. of test cases

        int n, frnt=0, bck=0;
        cin>>n;
        int fingers[n], sheath[n];
        for (int i=0; i<n; i++){
            cin>>fingers[i];
        }
        for (int i=0; i<n; i++){
            cin>>sheath[i];                               // taking inputs
        }

        for (int i=0; i<n; i++){                          // from the start of both array
            if (fingers[i] <= sheath[i]){
                frnt++;
            }
        }

        for (int i=n-1; i>=0; i--){
            if (fingers[(n-1)-i] <= sheath[i]){           // fingers array from start and sheath array from end 
                bck++;
            }
        }

        if (frnt==n && bck==n){                           // if both are n 
            cout<<"both"<<endl;
        }
        else if (frnt==n){                                // if only frnt is n
            cout<<"front"<<endl;
        }
        else if (bck==n){                                 // only bck is n
            cout<<"back"<<endl;
        }
        else {                                            // else 
            cout<<"none"<<endl;
        }
    }

    return 0;
}