#include <iostream>

using namespace std;

int prime_check(int sum);                            //declaring function for prime check condition 
   
int main(){
    int t;
    cin>>t;
    while(t--){                                      //taking no. of inputs
        int x, y, temp=0;
        cin>>x>>y;                                   //taking input
        temp=x+y;                                    //initial sum of two fields 
        for (int i=1; i<1001; i++){                  //loop till the constraint, since time:3sec, no tle
            temp+=i;                                 //adding the i in temp, i.e. sum of three fields
            if (prime_check(temp)==1){               //calling function to check whether temp is prime or not
                cout<<i<<endl;                       //if true print i
                break;
            }
            temp-=i;                                 //if not true than update temp as temp-=i, 
        }
    }
    
    return 0;
}

int prime_check(int sum){                            //defining function
    for (int i=2; i<sum; i++){                       //normal condition for prime
        if (sum%i==0){
            return 0;
        }
    }
    return 1;
}
