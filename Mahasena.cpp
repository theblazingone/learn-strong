#include <iostream>

using namespace std;

int main(){                                            
    int n;                                          
    cin>>n;                                         //taking input 
    int arr[n], eve_sum=0, odd_sum=0;               //declaring variables 
    for (int i=0; i<n; i++){                        //storing input in the array for no. of soldiers 
        cin>>arr[i];
        if (arr[i]%2==0){                           //if soldiers are even
            eve_sum+=arr[i];                        //add total no. of even soldiers
        }
        else {
            odd_sum+=arr[i];                        //and store sum of odd no. of soldiers
        }
    }
    if (odd_sum>eve_sum){                           //if odd sum is greater output the same 
        cout<<"NOT READY";
    }
    else {                                          //else output accordingly 
        cout<<"READY FOR BATTLE";
    }

    return 0;
}
