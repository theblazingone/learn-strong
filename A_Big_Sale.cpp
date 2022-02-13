#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n;
        cin>>n;
        double loss=0;

        while (n--){

            int price, quantity, discount;
            cin>>price>>quantity>>discount;
            double temp = (double) discount/100, k=0;

            k = price*temp*temp*quantity;
            loss+=k;
        }

        cout<<std::fixed;
        cout<<std::setprecision(9)<<loss<<endl;
    }

    return 0;
}