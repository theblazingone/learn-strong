#include <iostream>

using namespace std;

int main(){
   int n, temp;                                              //declaring variables
   int a; 
   cin>>n;                                                   //taking input
   for (int i=0; i<n; i++){                                  //loop for n test cases
   	cin>>a;                                              //taking input for the number
   	int sum=0;                                           //declaring and initializing sum as 0
   	while(a!=0){                                         //till a!=0
   		temp = a%10;                                 //storing a%10 i.e. remainder
   		a/=10;                                       //storing a/10 in a i.e. quotient, this is updation for a
                                                             //making 'a' a ...three, two, and one digit number accordingly 
   		sum+=temp;                                   //taking sum of remainders i.e. each digit
   	}
   	cout<<sum<<endl;                                     //outputting result
   }

   return 0;
}
