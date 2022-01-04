#include <iostream>
#include <string>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        char s1[1111], s2[1111];
        cin>>s1>>s2;
        int flag=0;

        for (int i=0; s1[i]; i++){
            for (int j=0; s2[j]; j++){
                if (s1[i] == s2[j]){
                    flag=1;
                    break;
                }
            }
            if (flag){
                break;
            }
        }

        puts(flag ? "Yes":"No");
    }

    return 0;
}