#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, Stair_V, Elevator_V;
        cin>>n>>Stair_V>>Elevator_V;

        float Stair_Time, Elevator_Time;
        Stair_Time = Stair_V*n*sqrt(2);
        Elevator_Time = Elevator_V*n;

        if ( Stair_Time > Elevator_Time){
            cout<<"Stairs"<<endl;
        }
        else{
            cout<<"Elevator"<<endl;
        }
    }

    return 0;
}