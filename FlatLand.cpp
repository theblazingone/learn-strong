#include <iostream>
#include <math.h>

using namespace std;

int Flatland(int N){
    int cnt=0;
    while(N>0){                                      // repeating operations till N -> 0
        int temp = floor(sqrt(N));                   // square root of N and floor value i.e. least integer value
        N = N - temp*temp;                           // decrementing N by temp*temp i.e. prefect square 
        cnt++;
    }

    return cnt;
}

int main(){

    int t;
    cin>>t;
    while (t--){                                      // no. of test cases
        int n;
        cin>>n;
        cout<<Flatland(n)<<endl;                      // function call
    }
    

    return 0;
}