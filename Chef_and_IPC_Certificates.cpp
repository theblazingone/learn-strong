#include <iostream>

using namespace std;

int main(){

    int n, m, k, eligible=0;
    cin>>n>>m>>k;                                  // take input

    while (n--){                                   // for n--

        int participant[k+1], sum=0;
        for (int i=0; i<k+1; i++){                 // taking sum till k+1
            cin>>participant[i];
            sum+=participant[i];
        }

        sum-=participant[k];                       // subtracting last element 

        if (sum>=m && participant[k]<=10){         // taking up all the conditions
            eligible++;
        }
    }
    cout<<eligible<<endl;

    return 0;
}