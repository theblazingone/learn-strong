#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){                                      //for taking no. of inputs
        int a, b, c;
        cin>>a>>b>>c;                                //for taking input
        if ((a+b+c)==180){                           //if angles are 180, triangle is valid
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;                        //else not
        }
    }
	
    return 0;
}
