#include <iostream>

using namespace std;

int main(){                                            
    int n;
    while(cin>>n){                                       //taking in the input 
        if (n==0){                                       //if zero is encountered in input, than break
            break;
        }
        else {
            int p[n], p1[n]={0};                         //declaring variables
            for (int i=0; i<n; i++){                     //taking in the input 
                cin>>p[i];
            }
            for (int i=0; i<n; i++){                     //this is the actual concept of this code
                p1[p[i]-1] = i+1;                        //updating elements of inverse permutation, dry run it
            }
            bool lame = true;                            //for checking if-else condition 
            for (int i=0; i<n; i++){
                if (p[i]!=p1[i]){                        //if permutation not equal than not ambiguous
                    lame=false;
                    break;
                }
            }
            if (lame){                                   //checking condition 
                cout<<"ambiguous"<<endl;
            }
            else{
                cout<<"not ambiguous"<<endl;
            }
        }
    }

    return 0;
}
