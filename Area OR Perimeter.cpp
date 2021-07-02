#include <iostream>

using namespace std;

#define ll long long 

int main() {
    ll l, b;
    cin>>l>>b;                                             //take in input for length and breadth 
    ll peri=0, area=0;
    peri=2*(l+b);                                          //calculate perimeter and area
    area=l*b;
    if (area>peri){                                        //area>peri condition
    	cout<<"Area"<<endl<<area;
    }
    else if (peri>area){                                   //peri>area condition
    	cout<<"Peri"<<endl<<peri;
    }
    else{                                                  //if both are equal
    	cout<<"Eq"<<endl<<peri;
    }

    return 0;
}
