#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int x, y, xr, yr, d;
        cin>>x>>y>>xr>>yr>>d;

        float food = x/xr;
        float water = y/yr;
        float day_survived = min(food, water);

        if (d > day_survived){
            cout<<"NO"<<endl;
        } 
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}