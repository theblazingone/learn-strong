#include<iostream>

using namespace std;

int main(){                                            
    int t;                                                    //declaring variable
    cin>>t;                                                   //taking number of inputs
    while(t--){
        char c;                                               //declaring variable for input of character 
        cin>>c;
        if (c=='C' || c=='c'){                                //conditions to check for cruiser
            cout<<"Cruiser"<<endl;
        }
        else if (c=='D' || c=='d'){                           //conditions to check for destroyer
            cout<<"Destroyer"<<endl;
        }
        else if (c=='B' || c=='b'){                           //conditions to check for battleship
            cout<<"Battleship"<<endl;
        }
        else if (c=='F' || c=='f'){                           //conditions to check for frigate
            cout<<"Frigate"<<endl;
        }
    }

    return 0;
}
