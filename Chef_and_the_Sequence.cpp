#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n1, n2;

        cin>>n1;
        int A1[n1];
        for (int i=0; i<n1; i++){
            cin>>A1[i];
        }

        cin>>n2;
        int A2[n2];
        for (int i=0; i<n2; i++){
            cin>>A2[i];
        }

        int i=0, j=0;
        while(i<n1 && j<n2){
            if (A1[i] == A2[j]){                   // we just have to check whether all elements of sub are present 
                                                   // in original array or not, if j becomes equal to n2 i.e size of 
                                                   // the subarray then output yes else no
                i++;
                j++;
            }
            else{
                i++;
            }
        } 
        if (j==n2){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}