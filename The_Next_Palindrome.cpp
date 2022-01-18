#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){                                               // no. of test cases

        string num;
        cin>>num;                                              // take input
        int n = num.length();

        string rev_num = num;                                  // making a copy of the string input
        for (int i=0; i<n/2; i++){                             // copying the first half values to second half
            rev_num[n-1-i] = rev_num[i];
        }

        if (rev_num>num){                                      // if the reverse string is greater than input string simple out it
            cout<<rev_num<<endl;
        }
        else {
            int mid = (n-1)/2;                                 // else either the reverse will be less or equal
            for (int i=mid; i>=0; i--){                        // start from mid
                if (rev_num[i]!='9'){                          // '9999' like strings will have 100001 as answer
                    rev_num[i] = (rev_num[i] + 1);             // increase the mid value and out it
                    break;
                }
                else{                                          // this means there is 9 in the mid then
                    rev_num[i] = '0';                          // give zero to that
                }
            }

            for (int i=n/2; i<n; i++){                         // making the copy of second half to first half
                rev_num[i] = rev_num[n-i-1];
            }

            if (rev_num[0] == '0'){                            // if first element of string is 0 then
                rev_num+='1';
                rev_num[0] = '1';
            }                                                  // this will give 10001
            cout<<rev_num<<endl;                               // output 
        }
    }

    return 0;
}