#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int minutes, song_time;
        cin>>minutes>>song_time;
        cout<<minutes/song_time<<endl;
    }

    return 0;
}