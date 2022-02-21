#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){
        
        int p1, p2, k;
        cin>>p1>>p2>>k;

        int n = (p1+p2)/k;

        (n%2==0 ? cout<<"CHEF\n" : cout<<"COOK\n");
    }

    return 0;
}