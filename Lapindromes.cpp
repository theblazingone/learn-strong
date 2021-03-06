#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){                                                         //taking no. of inputs
    	string s;
    	int s1[30]={0}, s2[30]={0};                                     //declaring variables
    	cin>>s;                                                         //taking input
    	int n = s.length();                                             //calculating length of the string
        if (n%2==0){                                                    //if even 
        	for (int i=0; i<n/2; i++){                              //loop for half of the string elements
        		s1[s[i]-'a'] = 1 + s1[s[i]-'a'];                //the int type array is made by converting char character into integer
        		s2[s[n-1-i]-'a'] = 1 + s2[s[n-1-i]-'a'];        //s1 and s2 both hold half-half character's ASCII values from string s 
        	}
        }
        else {
        	for (int i=0; i<(n-1)/2; i++){                          //else for odd, (n-1)/2
        		s1[s[i]-'a'] = 1 + s1[s[i]-'a'];                //similarly here we just neglect middle character 
        		s2[s[n-1-i]-'a'] = 1 + s2[s[n-1-i]-'a'];        //and store it's adjacent parts of strings
        	}
        }
        int temp=0;
        for (int i=0; i<30; i++){                                       //simple concept to check first half and second half's conditions 
        	if (s1[i]!=s2[i]){
        		temp=1;
        		break;
        	}
        }
        if (temp==1){                                                   //if else for the final output
        	cout<<"NO"<<endl;
        }
        else {
        	cout<<"YES"<<endl;
        }
    }

    return 0;
}
