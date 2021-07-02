#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){                                                        //taking the no. of inputs 
        int N, K, L;
        vector <string> phrase[55];                                    //declaring vector of strings
        string forgotten[109];
        cin>>N>>K;                                                     //taking in the input 
        for (int i=0;i<N; i++){
            cin>>forgotten[i];                                         //taking in no. of strings for which we have to check in K phrases
        }
        for (int i=0; i<K; i++){                                       
            cin>>L;                                                    //no. of phrases input
            for (int j=0; j<L; j++){                                   //taking in L strings in that particular phrase
                string S;
                cin>>S;                                                
                phrase[i].push_back(S);                                //pushing it in the vector 
            }
        }
        for (int i=0; i<N; i++){                                       //loop for no. of strings to check
            string ans="NO";
            for(int j=0; j<K; j++){                                    //loop for no. of phrases
                for(int k=0; k<phrase[j].size(); k++){                 //loop for each phrase's each string
                    if(phrase[j][k] == forgotten[i]){                  //if phrase string == forgotten string output yes
                        ans = "YES";
                    }
                }
	    }
	        cout<<ans<<(i==N-1? "\n":" ");                         //simply sticking to the output syntax, figure out yourself it is easy
	}
    }
    
    return 0;
}
