#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n;
    char a[10];
    scanf("%d", &n);                                              //scanf and printf are faster than cout and cin
    while (n--){                                                  //for taking no. of inputs
        scanf("%s", a);                                           //taking the string
        printf("%ld\n", a[0]-'0'+a[strlen(a)-1]-'0');             //printing the sum of first and last digit
                                                                  //strlen is used to count the no. of characters in the string
    }

    return 0;
}
