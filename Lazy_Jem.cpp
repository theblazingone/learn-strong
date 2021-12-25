#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){                                                       // no. of test cases 

        long long Num_problems, Break, Minutes;
        long long Total_time=0;
        cin>>Num_problems>>Break>>Minutes;                            // taking input
            
        while (Num_problems){                                         // until num problems went 0

            if (Num_problems%2 != 0){                                 // if num problems are odd
                int Start_problems = (Num_problems+1)/2;              // start with (Num_problems+1)/2
                Total_time += Minutes*Start_problems + Break;         // add
                Num_problems -= (Num_problems+1)/2;                   // update num_problems
            } 
            else{                                                     // if num problems are even
                int Start_problems = Num_problems/2;                  // start with Num_problems/2
                Total_time += Minutes*Start_problems + Break;         // add
                Num_problems -= Num_problems/2;                       // update num_problems
            }

            Minutes = Minutes*2;                                      // update minutes at eveery break 
        }

        cout<<Total_time-Break<<endl;                                 // output 
    } 

    return 0;
}