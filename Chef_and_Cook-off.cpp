#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int A[5], cnt=0;
        for(int i=0; i<5; i++){
            cin>>A[i];
            if(A[i]==1){
                cnt++;
            }
        }
        if(cnt==0){
            cout<<"Beginner"<<endl;
        }
        else if(cnt==1){
            cout<<"Junior Developer"<<endl;
        }
        else if(cnt==2){
            cout<<"Middle Developer"<<endl;
        }
        else if(cnt==3){
            cout<<"Senior Developer"<<endl;
        }
        else if(cnt==4){
            cout<<"Hacker"<<endl;
        }
        else{
            cout<<"Jeff Dean"<<endl;
        }
    }

    return 0;
}