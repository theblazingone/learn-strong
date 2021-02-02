#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){                                    //for number of inputs
        int a, b;                                  //declaring variables for inputs
        cin>>a>>b;
        if (a>b){                                  //simple condition check for relational operators 
            cout<<">"<<endl;
        }
        else if (a<b){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }

    return 0;
}
