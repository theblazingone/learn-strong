#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                                   // no. of test cases

        int problems, participant, cakewalk=0, hard=0;
        cin>>problems>>participant;
        int A[problems];
        for (int i=0; i<problems; i++){
            cin>>A[i];
        }                                                          // take input

        for (int i=0; i<problems; i++){
            if (A[i] >= (int)participant/2){                       // if element greater than equal to half of participants 
                cakewalk++;                                        // increase cakewalk
            }
            else if (A[i] <= (int)participant/10) {                // else if element less than equal to one tenth of participants
                hard++;                                            // increase hard 
            }
        }
        if (hard == 2 && cakewalk == 1){                           // balanced contests should have 2 hard and 1 cakewalk questions 
            cout<<"yes"<<endl;                                     // output
        }
        else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}