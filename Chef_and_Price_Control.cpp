#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int k, p, sum = 0, sum_cap=0;
        cin>>k>>p;

        int a[k];
        for (int i=0; i<k; i++){
            cin>>a[i];
            sum += a[i];                               // sum before capping of price
            if (a[i] >= p){                            // if greater than or equal to cap price
                a[i] = p;                              // replace
            }
            sum_cap += a[i];                           // sum after capping of price
        }

        cout<<sum-sum_cap<<endl;
    }

    return 0;
}