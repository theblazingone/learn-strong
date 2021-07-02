#include <iostream>

using namespace std;

int main(){
    int a, b, n;
    cin>>n;                                    //for taking no. of inputs
    for (int i=0; i<n; i++){
        int rem=0;                             
        cin>>a>>b;
        rem = a%b;                             //outputting remainder 
        cout<<rem<<endl;
    }
    
    return 0;
}
