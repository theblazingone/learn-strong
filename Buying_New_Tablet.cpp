#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n, budget, max=-1;
        cin>>n>>budget;

        while(n--){
            int length, breadth, price, area;
            cin>>length>>breadth>>price;

            area = length*breadth;

            if (price<=budget){
                if (area > max){
                    max = area;
                }
            }
        }

        if (max==-1){
            cout<<"no tablet"<<endl;
        }
        else{
            cout<<max<<endl;
        }
    }

    return 0;
}