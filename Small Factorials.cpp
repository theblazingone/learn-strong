#include <iostream>

using namespace std;

int main(){
   int arr[200];
   int t;
   cin>>t;
   while (t--){                                    //taking no. of inputs 
    int n;
    cin>>n;                                        //taking input
    arr[0]=1;
    int m=1, temp=0;
    for (int i=1; i<=n; i++){                      //loop for array's indices 
    	for (int j=0; j<m; j++){                   //loop for array's updation and calculating factorial
    	    int x = arr[j]*i+temp;
            arr[j]=x%10;
            temp=x/10;
    	}
    	while(temp>0){                             //storing the factorial value's each digit in the array 
    	    arr[m]=temp%10;
            temp/=10;
            m++;
    	}
    }
    for(int i=m-1; i>=0; i--){                     //outputting the values in the array
    	cout<<arr[i];
    }
    cout<<endl;
   }

   return 0;
}
