#include <iostream>
#include <string>

using namespace std;

int main(){
    int A[26];                            // total english alphabets 26
	for(int i=0;i<26;i++){                // loop for initializing array indices = 0
		A[i]=0;
    }
	string S;
	cin>>S;                               // take input
	int i=0;
	while(S[i]){
		A[S[i]-'a']=1;                    // marking 1 for every indice which is in the given string and rest remain zero
		i++;
	}
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		string C;
		cin>>C;                           // taking second input
		int j=0;
		int p=0;
		while(C[j]){
			if(A[C[j]-'a']==0)            // checking if indice in the given string is zero, if yes then our output is NO 
                                          // because we want indice 1 for our output  
				p=1;
			j++;
		}
		if(p==1)                          // output
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}

    return 0;
}