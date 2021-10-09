#include <iostream>

using namespace std;

int main(){
    int a[110];                             // initialize variables 
    int t;
    cin>> t;                             
    while(t--){                             // no. of taste cases
    	int N, K;
        a[0] = 0;
        cin>>N>>K;                          // taking input
        for (int i=1; i<=N; i++){
            cin>>a[i];
            if (a[i]<=K){                   // condition apply on input
                cout<<"1";
                K = K-a[i];                 // updating 
            }
            else{
                cout<<"0";
            }
        }
    cout<<endl;
    }

    return 0;
}
