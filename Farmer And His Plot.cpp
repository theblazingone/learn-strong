#include <iostream>

using namespace std;

int gcd(int a, int b){                         // normal gcd function 
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
    int t, c;                                  // initializing variables
    cin>>t;
    while(t--){                                // test cases
        int l, b;
        cin>>l>>b;
        c = gcd(l, b);                         // passing length and breadth to gcd function 
                                               // to common get the greatest common side of the square
        cout<<(l*b)/(c*c)<<endl;               // no. of squares = area of rectangle / area of square
    }

    return 0;
}