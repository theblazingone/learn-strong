#include <iostream>

using namespace std;

#define ll long long

int main(){
	ll n, t, click;                                              //declaring variables
	cin>>n>>t;            
	ll a[n];                                                     //array of size n
	for (int i=0; i<n; i++){
	     a[i]=0;                                                 //setting all values of array to 0
	}
	ll tweet_cnt=0;                                              //setting count to 0
	while(t--){                                                  //no. of test cases
	      string s;
	      cin>>s;                                                //taking input for the string
	      if (s!="CLOSEALL"){                                    //if "CLOSE ALL" is not the input 
	          cin>>click;                                        //then taking in the integer value after the string 
		  if (a[click-1]){                                   //if it is true set that value to 0 and reduce the count by 1 
		      a[click-1]=0;
		      tweet_cnt--;
		  }
		  else{                                              //else set that value to 1 and increase count by 1
	              a[click-1]=1;
		      tweet_cnt++;
		  }
	      }
	      else{                                                  //else set count to 0 and set the array again to 0 for next test case
		  tweet_cnt=0;                                                
		  for (int i=0; i<n; i++){
		       a[i]=0;
		  }
	      }
	      cout<<tweet_cnt<<endl;                                 //give output 
	}

	return 0;
}
