#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    float y, temp;                                                      //declaring variables
    cin>>x>>y;                                                          //taking input
    if (x<=y-0.5){                                                      //if x is less than equal to y-0.5
    	if (x%5==0){                                                    //also x%5 should be 0
    		temp =  y-x-0.50;                                       //storing result in temp
    		cout<<fixed;
    		cout<<setprecision(2)<<temp;                            //output temp with precision
    	}
    	else {                                                          //if x%5 is not 0 then
    		cout<<fixed;                                           
    		cout<<setprecision(2)<<y;                               //output y with precision 
    	}
    }
    else {                                                              //if x is not less than equal to y-0.5
    	cout<<fixed;                                                    
    	cout<<setprecision(2)<<y;                                       //output y with precision 
    }

    return 0;
}
