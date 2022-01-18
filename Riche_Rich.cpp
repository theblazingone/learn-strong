#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int current_worth, needed_worth, worth_per_year;
        cin>>current_worth>>needed_worth>>worth_per_year;

        int worth_needed = needed_worth - current_worth;
        cout<<worth_needed/worth_per_year<<endl;
    }


    return 0;
}