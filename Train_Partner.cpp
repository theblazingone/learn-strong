#include <iostream>

using namespace std;

string train_neighbours(int n){                            // function returning a string
    int x = n%8;                                           // checking for the multiples of 8

    string t[9] = {"", "LB", "MB", "UB", "LB", "MB", "UB", "SU", "SL"};
                                                           // this is the most important part of this problem
                                                           // this shows the arrangement of the births and compartments
    if (x == 7){
        return to_string(n+1) + t[7];                      // "SU" & "Sl" are different cases dry run it for 1-8 seat nos.
    }
    else if (x == 0){                  
        return to_string(n-1) + t[8];
    }
    else {
        if (x>3){
            return to_string(n-3) + t[x];                  // if seat numbers are greater than 3 
        }
        else {
            return to_string(n+3) + t[x];                  // if smaller or equal to 3 
        }
    }
}

int main(){

    int t;
    cin>>t;

    while (t--){                                           // no. of test cases 

        int n;
        cin>>n;
        cout<<train_neighbours(n)<<endl;                   // function call
    }

    return 0;
}