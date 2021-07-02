#include <iostream>
#include <string>

using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){                                              //for no. of test cases
        char s[100000];
        cin>>s;                                              //taking in input 
        int flag=0, count=0, i=0;
        for (i=0; s[i]!='\0'; i++){                          
            if (s[i]=='1'){                                  //if s[i] is 1
                flag=1;                                      //give flag=1
            }
            if (flag==1 && s[i]=='0'){                       //if flag is 1 and the next s[i] is 0
                count++;                                     //count increase 
                flag=0;
            }
        }
        if (s[i-1]=='1'){                                    //also for the last element if it is 1 it will not satisfy above conditions 
            count++;                                         //therefore it will have different set of conditions 
        }
        cout<<count<<endl;                                   //output 
    }

    return 0;
}
