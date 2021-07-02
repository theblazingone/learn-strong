#include <iostream>
#include <array>

using namespace std;

int main(){
   int n, k, count=0;                                       //declaring variables
   cin>>n>>k;                                               //taking input
   int a[n];                                                //declaring array of the input size
   for (int i=0; i<n; i++){                                 //loop for inputting array elements in array
   	cin>>a[i];
   }
   for (int i=0; i<n; i++){                                 
   	if (a[i]%k==0){                                     //if a element of array is divisible by k 
   		count++;                                    //increase count by 1
   	}                                                   //this count variable will count no. of such elements in the array
   }
   cout<<count;                                             //outputting result

   return 0;
}
