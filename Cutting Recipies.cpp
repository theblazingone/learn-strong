#include <iostream>

using namespace std;

int gcd(int a, int b);                                   //declaring function

int main(){
    int t;
    cin>>t;                                        
    while(t--){                                          //taking no. of inputs
    	int n;  
    	cin>>n;                                          //taking input
    	int a[n];                                       
    	for (int i=0; i<n; i++){                        
    		cin>>a[i];
    	}
    	int res;
    	res = gcd(a[0], a[1]);                           //calling function, starting with first and second element
    	for (int i=2; i<n; i++){                         //starting with 3rd element and result of first and second
    		res = gcd(res, a[i]);                    //calling function according to for loop
    	}
    	for (int i=0; i<n; i++){                         
    		cout<<a[i]/res<<" ";                     //for loop, since ingredient should be min., by gcd we get min.
                                                         //also a[i] divided by each gcd ans we get ingredients as min.
    	}          
    	cout<<endl;
    }

    return 0;
}

int gcd(int a, int b){                                   //defining function
	if (a==b){                                       //this is a full gcd recursive program
		return a;
	}
	if (a==0){
		return b;
	}
	if (b==0){
		return b;
	}
	if (a>b){
		return gcd(a-b, b);                      //make a dry run of these and you will get it :)
	}
	else {
		return gcd(a, b-a);
	}
}
