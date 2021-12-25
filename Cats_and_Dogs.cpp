#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){                                            // no. of test cases 

        int Cats, Dogs, Legs, flag=1;                      // input
        cin>>Cats>>Dogs>>Legs;

        int Animals = Legs/4;                              // total animals contributing to legs 

        if (Legs%4 != 0){                                  // basic condition if legs are not divisible by 4
            flag = 0;
        }

        int Cats_ground = Animals - Dogs;                  // Cats on ground will be total animals - dogs

        if (Cats_ground<0){                                // if negative output no
            flag = 0;
        }

        int Cats_dogs = Cats - Cats_ground;                // Cats_ground + Cats_dogs = Cats 

        if (Cats_dogs<0 || Cats_dogs > 2*Dogs){            // if Cats_dogs are negative or Cats_dogs are twice then dogs
                                                           // only 2 cats are allowed on dogs 
            flag = 0;
        }

        if (flag){                                         // output 
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }

    return 0;
}