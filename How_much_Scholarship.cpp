#include <iostream>

using namespace std;

int main(){

    int Rank;
    cin>>Rank;
    if (Rank>=1 && Rank<=50){
        cout<<"100"<<endl;
    }
    else if (Rank>=51 && Rank<=100){
        cout<<"50"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }

    return 0;
}