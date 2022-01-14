#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                      // no. of test cases 
        int n;
        cin>>n;

        int temp, B[101] ={0};                       
        for (int i=0; i<n; i++){
            cin>>temp;
            B[temp]++;                                // take input and increment with 1 in B[101]
        }

        int max = *max_element(B, B+101);             // maximum number of occurances of that element 
        cout<<n-max<<endl;                            // n-max gives exactly minimum no. of moves
    }

    return 0;
}