#include <iostream>

using namespace std;

int main() {

	int t; 
    cin>>t;
    
    string weekday[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};

	while(t--){

	    int y; 
        cin>>y;
	    y--;

	    int d = (y+y/4-y/100+y/400+1)%7;

	    cout<<weekday[d]<<endl;
	}

	return 0;
}
