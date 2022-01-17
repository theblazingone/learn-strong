#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                           // no. of test cases

        int n, k, v, sum_remain=0;
        cin>>n>>k>>v;
        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];
            sum_remain+=A[i];                              // take input and sum the remaining n elements of sequence 
        }

        int total_num = n+k;                               // total numbers in the sequence
        int sum_original = total_num*v;                    // original sum will be v(known average of n numbers) * by total numbers

        int x = (sum_original - sum_remain)/k;             // original sum - remaining n elements sum divided by k will give our ans
        
        if ((sum_remain+x*k)/(n+k) == v && x>0){           // checking average of the all numbers == v, division should give greater than 0
            cout<<x<<endl;                                 // output
        }
        else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}