#include <iostream>

using namespace std;

int main() {
	
	int t;
	cin>>t;

	while(t--){

	    int w;
	    cin>>w;
	    string s;
	    cin>>s;
	    
        int v;
	    if(s=="mon"){
	        v=0;
	    }
	    else if(s=="tues"){
	        v=1;
	    }
        else if(s=="wed"){
            v=2;
        }
        else if(s=="thurs"){
            v=3;
        }
        else if(s=="fri"){
            v=4;
        }
        else if(s=="sat"){
            v=5;
        }
        else if(s=="sun"){
            v=6;
        }
        
        w%=7;
        int a[7]={4,4,4,4,4,4,4};

        while(w--){

            a[v%7]++;
            v++;
        }

        for(int i=0;i<7;i++){
            
            cout<<a[i]<<" ";
        }
        cout<<endl;

	}

	return 0;
}

