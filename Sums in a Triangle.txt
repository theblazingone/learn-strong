#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){                                                    //taking no. of inputs
        int n; 
        cin>>n;                                                    //input for computation on them
        int a[n][n];                                               //2-D array to store max. numbers
        for (int i=0; i<=n-1; i++){                                //loop for taking input in it as a triangle pattern
            for (int j=0; j<=i; j++){
                cin>>a[i][j];
            }
        }
        for (int i=n-2; i>=0; i--){                                //make a dry run of this loop to understand it 
            for (int j=0; j<=i; j++){
                a[i][j] = a[i][j]+max(a[i+1][j+1],a[i+1][j]);      //changes are made in the second last row by adding in it
                                                                   //the maximum no. from last row and similarly this trend goes 
                                                                   //according to the loop and finally prints the added result in a[0][0]
            }
        }
        cout<<a[0][0]<<endl;
    }
    
    return 0;
}
