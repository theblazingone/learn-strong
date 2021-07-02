#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){                                     //taking in no. of inputs
        string s;
        cin>>s;                                     //taking input
        int p=0, c=0, m=0;
        for (int i=0; i<3; i++){                    //loop for string check for 'P','C' and 'M'
            if(s[i]=='P'){                          //if 'P' is present in string update p=0
                p++;
            }
            if(s[i]=='C'){                          //if 'C' is present in string update c=0
                c++;
            }
            if(s[i]=='M'){                          //if 'M' is present in string update m=0
                m++;
            }
        }
        if (p>0&&c>0&&m>0){                         //if all three are present and have updated values
            cout<<"YES"<<endl;                      //output 'YES'
        }
        else {
            cout<<"NO"<<endl;                       //otherwise output 'NO'
        }
    }
    
    return 0;
}
