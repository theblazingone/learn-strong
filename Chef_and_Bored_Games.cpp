#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--){
        
        int n, sum=0;
        cin>>n;

        for (int i=1; i<=n; i++){
            if (i%2!=0){
                sum += (n-i+1)*(n-i+1);
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}