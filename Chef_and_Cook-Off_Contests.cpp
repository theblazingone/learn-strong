#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n;
        int cw=0, sm=0, es=0, esm_m=0, mh_h=0;
        cin>>n;

        while (n--){

            string s, compare[] = {"cakewalk", "simple", "easy", "easy-medium", "medium", "medium-hard", "hard"};
            cin>>s;

            if (s == compare[0] && cw==0){
                cw++;
            }
            else if (s == compare[1] && sm==0){
                sm++;
            }
            else if (s == compare[2] && es==0){
                es++;
            }
            else if ((s == compare[3] || s == compare[4]) && esm_m==0){
                esm_m++;
            }
            else if ((s == compare[5] || s == compare[6]) && mh_h==0){
                mh_h++;
            }
        }

        if (cw!=0 && sm!=0 && es!=0 && es!=0 && esm_m!=0 && mh_h!=0){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}