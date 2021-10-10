#include <iostream>

using namespace std;

#define ll long long

int main() {
    int a, b, c;
    cin>>a>>b>>c;                       // take input
    if (a==b || a==c){                  // check for condition 
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
