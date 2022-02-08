#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, s;
        cin>>n>>s;
        int p[n], a_d[n];
        for (int i=0; i<n; i++){
            cin>>p[i];
        }
        for (int i=0; i<n; i++){
            cin>>a_d[i];
        }

        if (s==100){
            cout<<"no"<<endl;
        }
        else {
            int x=0, y=0, min_d=INT16_MAX, min_a=INT16_MAX;
            for (int i=0; i<n; i++){
                if (a_d[i]==0){
                    if (min_d>p[i]){
                        min_d = p[i];
                    }
                }
                else {
                    if (min_a>p[i]){
                        min_a = p[i];
                    }
                }
            }

            if (min_a+min_d+s>100){
                cout<<"no"<<endl;
            }
            else {
                cout<<"yes"<<endl;
            }
        }
        
    }

    return 0;
}