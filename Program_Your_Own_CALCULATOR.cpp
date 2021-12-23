#include <bits/stdc++.h>

using namespace std;

int main(){

    double a, b, ans;
    char C;
    cin>>a>>b>>C;
    
    if (C=='+'){
        ans = a+b;
    }
    else if (C=='-'){
        ans = a-b;
    }
    else if (C=='/'){
        ans = a/b;
    }
    else {
        ans = a*b;
    }

    cout<<fixed<<setprecision(6)<<ans;    

    return 0;
}