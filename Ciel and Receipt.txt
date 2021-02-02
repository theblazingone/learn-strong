#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int t, temp;
    cin>>t;                                        //for total no. of inputs
    int menu[12];                                  //allocating array of size 12 for storing menu 
    for (int i=1; i<=12; i++){
    	menu[i]=pow(2,i-1);                        //storing input in array as a power of 2^i-1
    }
    while(t--){
    	int a;
    	cin>>a;                                    //to store total price
    	temp=a/2048;                               //initializing temp by using greedy algorithm 
                                                   //https://en.wikipedia.org/wiki/Greedy_algorithm
    	a=a%2048;                                  //updating the price by storing remainder in it
    	while(a!=0){
    		temp+=a%2;                         //storing in temp the remainder of the price 
                                                   //temp is basically counting min. no. of menus
    		a/=2;                              //updating the a by dividing it with 2 
    	}
    	cout<<temp<<endl;
    }

    return 0;
}
