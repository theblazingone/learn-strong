#include <iostream>

using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;

    while (t--){                                            // no. of test cases
        
        int n, area=1, s1=0, s2=0;
        cin>>n;
        bool flag = false;
        int temp[1001] = {0};

        int a[n];
        for (int i=0; i<n; i++){
            cin>>a[i];
            temp[a[i]]++;
        }                                                   // taking inputs and updating array with all the elements occurances 

        for (int i=1000; i>=1; i--){
            if (temp[i] >= 2 && flag == false){             // checking condition from back of the array to find largest i with occurances
                                                            // 2 or more
                temp[i]-=2;
                s1 = i;
                flag = true;                                // note: flag is important 
            }
            if (temp[i] >= 2 && flag == true){              // second side with same logic 
                temp[i]-=2;
                s2 = i;
                break;                                      // break lets us collect two of the largest elements
            }
        }

        area = s1*s2;                                       // calculate area and output
        if (area==0){
            cout<<"-1"<<endl;
        }
        else {
            cout<<area<<endl;
        }
    }

    return 0;
}