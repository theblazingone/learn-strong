#include <iostream>

using namespace std;

int main(){
    int t;
    int win=0, lead=0;
    int p_a=0, p_b=0;
    cin>>t;  
    while(t--){                                    //taking no. of inputs
  	int a, b;
  	cin>>a>>b;                                 //taking input
  	a+=p_a;                                    //updating a & b using p_a & p_b, these are total scores
  	b+=p_b;
  	if(a>b){                                   //if a>b 
  		if ((a-b)>lead){                   //lead becomes a-b and player 1 will win
  			lead=a-b;
  			win=1;
  		}
  	}
  	else {                                     //else if b>a
  		if ((b-a)>lead){                   //lead becomes b-a and player 2 will win
  			lead=b-a;
  			win=2;
  		}
  	}
  	p_a=a;                                     //updating p_a and p_b using existing values of a and b
  	p_b=b;
    }
    cout<<win<<" "<<lead;                          //output 
   	
    return 0;
}
