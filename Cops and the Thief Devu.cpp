#include <iostream>

using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){                                                //taking no. of test cases
	ll n, x, y;                                            
	cin>>n>>x>>y;                                          //taking the input
	ll a[100];
	for (int i=0; i<100; i++){
		a[i]=0;                                        //initializing all the elements in the array with 0
	}
	while(n--){                                            //for no. of cops in the input 
	    int cop_house;
	    cin>>cop_house;                                    //taking the house no. in which cop resides
	    int llimit, hlimit;                                //these two are actual range of houses which a single cop can cover
	    llimit = cop_house-(x*y);                          //x*y beacause distance = speed*time
	    hlimit = cop_house+(x*y); 
	    llimit<1 ? llimit=1:llimit;                        //if lower limit less than 1 then 1 is lower limit otherwise llimit remains unchanged 
	    hlimit>100 ? hlimit=100:hlimit;                    //if higher limit greater than 100 then 100 is higher limit otherwise hlimit remains unchanged
	    for (int i=llimit-1; i<hlimit; i++){               //llmit- 1 beacuse indexing of array is base 0 and less than 100
		a[i]=1;                                        //changing all the houses covered by cops from 0 to 1
	    }
	}
	int safe_house=0;
	for (int i=0; i<100; i++){
	    if (a[i]==0){                                      //all safe houses are marked with 0
		safe_house++;                                  //therefore counting all those safe houses
	    }
	}
	cout<<safe_house<<endl;                                //output 
    }

    return 0;
}
