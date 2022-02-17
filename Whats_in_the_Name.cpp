#include<bits/stdc++.h>

using namespace std;

int main(){
    
    cin.tie(NULL);                                    

    int t;
    cin>>t;                                           // no. of test cases
    t++;                                              // getline gets \n as a end of string

    while(t--){

        string s;
        getline(cin , s);                             // take input
        stringstream no_space(s);                     // string stream breaks string of space is encountered
        string str , nxt;
        no_space>>str;                                // no_space string gets first string word for str
        
        while(no_space >> nxt){                       // here nxt is left string words in str

            cout<<char(toupper(str[0]))<<". ";        // toupper for first word with dot
            str = nxt;                                // updating string
        }

        for(int j = 0 ; j < str.size() ; j++){
            str[j] = tolower(str[j]);                 // last word tolower 
        }
        str[0] = toupper(str[0]);                     // last word first letter toupper
        cout<<str<<endl;                              // output
    }

    return 0;
}