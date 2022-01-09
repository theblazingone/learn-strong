#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){                                // no. of test cases
        
        vector <int> v;                        
        
        while (1){                             // infinte loop with break
            
            int n;
            cin>>n;                            // taking single number and pushing it in v 
            v.push_back(n);
            if (getchar() == '\n'){            // until user hits new line
                break;
            }
        }
        
        int s = v.size()-1;                    // s becomes size of vector - 1 
        sort(v.begin(), v.end());              // sorting it 
        
        if (s == v[s]){                        // this means that element equal size - 1
            cout<<v[s-1]<<endl;                // hence largest is second last number
        }
        else{
            cout<<v[s]<<endl;                  // else that number is the result
        }
    }
    
    return 0;
}
