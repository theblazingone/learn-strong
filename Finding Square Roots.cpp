#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, cnt=0;
    int num, sqr;
    cin>>t;                                   //taking no. of inputs
    while(t--){
    	cin>>num;                             //taking input
    	sqr=(int)sqrt(num);                   //storing the square root of the input
                                              //in integer format
    	cout<<sqr<<endl;                      //output it
    }

    return 0;
}
