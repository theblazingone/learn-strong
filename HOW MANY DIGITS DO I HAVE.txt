#include <iostream>
#include <cstring>

using namespace std;

#define ll long long 

int main() {
    char a[1000000];
    cin>>a;                                               //taking in the input as string array
    ll n= strlen(a);                                      //taking length of the string array
    if (n==1){                                            //now simply putting conditions ;)
    	cout<<"1";
    }
    else if (n==2){
    	cout<<"2";
    }
    else if (n==3){
    	cout<<"3";
    }
    else{
    	cout<<"More than 3 digits";
    }

    return 0;
}
