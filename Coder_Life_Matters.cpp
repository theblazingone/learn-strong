#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int A[30], flag=0;

        for (int i=0; i<30; i++){
            cin>>A[i];
        }

        for (int i=0; i<30; i++){
            if (A[i] == 1 && A[i+1] == 1 && A[i+2] == 1 && A[i+3] == 1 && A[i+4] == 1 && A[i+5] == 1){
                flag = 1;
                break;
            }
        }

        if (flag){
            cout<<"#coderlifematters"<<endl;
        }
        else {
            cout<<"#allcodersarefun"<<endl;
        }
    }

    return 0;
}