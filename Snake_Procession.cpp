#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int l, cnt=0;
        cin>>l;
        string s;
        cin>>s;
        
        s.erase( remove(s.begin(), s.end(), '.'), s.end());
        int length = s.length();
        
        for (int i=0; i<length; i++){
            if (s[i] == 'H' && s[i+1] == 'T'){
                cnt++;
            }
        }
        
        if (length%2==0 && cnt==length/2){
            cout<<"Valid"<<endl;
        }
        else if (length == 0){
            cout<<"Valid"<<endl;
        }
        else {
            cout<<"Invalid"<<endl;
        }
    }
    
    return 0;
}