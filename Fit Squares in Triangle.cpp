#include <iostream>

using namespace std;

int sum(int n, int m);

int main(){                                            
    long long t;
    cin>>t;
    while(t--){                                         //taking no. of inputs
        long long base;
        cin>>base;                                      //taking the value of the base of the triangle 
        int sum=0;                                      //initializing value of sum as 0
        sum+=(base/2)-1;                                //simple logic: if base is 8, square is of size 2x2 than
                                                        //4-1=3 i.e. sum=3 therefore the squares in the triangle are
        cout<<(sum*(sum+1)/2)<<endl;                    //for n no. of sum in an A.P. n*(n+1)/2
    }

    return 0;
}
