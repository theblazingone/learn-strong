#include <iostream>

using namespace std;

int main(){
    int matches[] = {6,2,5,5,4,5,6,3,7,6};             // address of digit = no. of matches used to make it
    int t;
    cin>>t;                                            // take input
    while(t--){
    	int a, b, sum=0, count=0;
        cin>>a>>b;
        sum = a+b;                                     // sum of numbers
        while(sum>0){ 
            int digit = sum%10;
            sum = sum/10;
            count = count + *(matches + digit);        //(matches + digit) finds address of the digit 
                                                       //* changes it from address to that particular value      
        }
        cout<<count<<endl;
    }

    return 0;
}
