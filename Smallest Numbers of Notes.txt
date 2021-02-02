#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int mony[]={100,50,10,5,2,1};                    //types of notes
    while(t--){                                      //for no. of inputs
        int p;
        cin>>p;                                      //taking in the input
        int ans=0;
        for (int i=0; i<6; i++){                     //for array of notes 
            if (p>=mony[i]){                         //if input is greater than any of the denomination
                ans=ans+p/mony[i];                   //adding it in ans (counts no. of notes) by dividing 
                                                     //it with the denomination greater than the input
                p=p%mony[i];                         //updating input for the unit digit in the input e.g. 201
            }
        }
        cout<<ans<<endl;                             //outputting min. no. of notes
    }

    return 0;
}
