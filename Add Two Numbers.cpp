#include <iostream>
#include <array>

using namespace std;

int main(){
   int num;                                             //declaring variables
   cin>>num;                                            //taking input
   int n[num], m[num], add[num];                        //declaring array of num size
   for (int i=0; i<num; i++){                           //loop for taking input in arrays
   	cin>>n[i]>>m[i];
   }
   for (int i=0; i<num; i++){                           //loop for adding input of above two arrays
   	add[i] = n[i]+m[i];
   }
   for (int i=0; i<num; i++){                           //outputting the resulted array
   	cout<<add[i]<<endl;
   }

   return 0;
}
