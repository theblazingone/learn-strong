#include <iostream>

using namespace std;

int main() {
    int N, H, x;
    cin>>N>>H>>x;                             //taking in the input 
    int t[N];
    for (int i=0; i<N; i++){
    	cin>>t[i];
    }
    for (int i=0; i<N; i++){
    	t[i]=x+t[i];                          //simply increasing every element in hour array
    }
    for (int i=0; i<N; i++){
    	if (t[i]==H){                         //if the increased time is equal to H output Yes
    		cout<<"YES";
    		return 0;                     //and end the program
    	}
    }
    cout<<"NO";                               //else output No

    return 0;
}
