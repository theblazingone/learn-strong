#include <iostream>

using namespace std;

int main(){                                            
    int n;
    cin>>n;                       //taking input
    int t=n;                      //duplicating input
    if (n%4==0){                  //if input is divisible by 4
        t++;                      //increase one in actual input
        cout<<t;
    }
    else{
        t--;                      //else decrease it by one and output the result
        cout<<t;
    }

    return 0;
}
