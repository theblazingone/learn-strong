#include<iostream>
#include<cstring>

using namespace std;
    
int main(){
   	int t; char a[15];                           //declaring variables
   	cin>>t;                                      //taking number of inputs
   	while(t--){
	   	cin>>a;
	   	int c=0,k;
    	for( k=0; k<strlen(a); k++){                 //loop upto string length to check every character
	    	if(a[k]=='4')                        //if char == 4 then increase count
                      c++;
    	}
    	cout<<c<<endl;                               //output the count
    }
    
    return 0;
}
