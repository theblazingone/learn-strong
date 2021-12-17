#include <iostream>
#include <algorithm>

using namespace std;

int main(){

   int t;
   cin>>t;
   while(t--){
      int A, B, N;
      cin>>A>>B>>N;
      if(N%2!=0){
         A *= 2;
      }
      cout<<max(A,B)/min(A,B)<<endl;
   }

   return 0;
}