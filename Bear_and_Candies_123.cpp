#include <iostream>

using namespace std;

int main(){
    int t;
    while(t--){                                    // test cases 
        int L, B;
        cin>>L>>B;                                 // take input
        for(int i=0; true; i++){                     
            if (i%2==1){                           // if even subtract from Limak's candies  
                L-=i;
                if (L<0){                          // if Limak's candies goes negative Bob wins
                    cout<<"Bob"<<endl;
                    break;                         // and break from the loop
                }
            }
            else{
                B-=i;                              // else subtract from Bob's candies 
                if (B<0){                          // Bob's candies goes negative
                    cout<<"Limak"<<endl;           // Limak wins and break from loop
                    break;
                }
            }
        }
    }

    return 0;
}