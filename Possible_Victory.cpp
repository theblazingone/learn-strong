#include <iostream>

using namespace std;

int main(){

    int r, o, c;
    cin>>r>>o>>c;

    int left_overs = 20 - o;
    int runs_needed = r-c;

    if (left_overs*36 > runs_needed){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}