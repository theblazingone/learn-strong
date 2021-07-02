#include <iostream>

using namespace std;

int main(){                                            
    int a, b;
    cin>>a>>b;                      //taking input
    if (a>b){                       //condition check for a>b
        cout<<a-b;                  //if yes output difference 
    }
    else{
        cout<<a+b;                  //else sum 
    }

    return 0;
}
