#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int C[n], W[n];
    for (int i=0; i<n; i++){
        cin>>C[i];
    }
    for (int i=0; i<n; i++){
        cin>>W[i];
    }

    vector <int> W_1, W_2, W_3;
    for (int i=0; i<n; i++){
        if (W[i]==1){
            W_1.push_back(C[i]);
        }
        else if (W[i]==2){
            W_2.push_back(C[i]);
        }
        else if (W[i]==3){
            W_3.push_back(C[i]);
        }
    }

    W_1.push_back(1e9);
    W_2.push_back(1e9);
    W_3.push_back(1e9);
    sort(W_1.begin(), W_1.end());
    sort(W_2.begin(), W_2.end());
    sort(W_3.begin(), W_3.end());

    cout<<min(W_1[0] + W_2[0], W_3[0]);

    return 0;  
} 