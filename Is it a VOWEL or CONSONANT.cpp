#include <iostream>

using namespace std;

int main() {
    char c;                                                                     //declare character 
    cin>>c;                
    if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){                        //simple condition check for vowels
    	cout<<"Vowel";
    }
    else{
    	cout<<"Consonant";                                                      //UPPERCASE CHARACTERS are input  
    }
    
    return 0;
}
