#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, arr[1000001]={0}, b;
    scanf("%d", &a);
    while(a--) {                                //for no. inputs
        scanf("%d", &b);                        //taking input
        arr[b]++;                               //increamenting the indices value 
    }
    for(int i=0; i<1000001; i++) {              //loop for indices values of the array
        while(arr[i]>0) {                       //if input array element is greater than 0 
            printf("%d\n", i);                  //printing those indices which are smaller 
            arr[i]--;                           //updating indices value by decreamenting it 
        }
    }

    return 0;
}

//conclusion: printf and scanf are way too fast
//this sort will fail when two or more same elements are entered by the user 
//therefore use merge sort or heap sort 
//this will only solve the question and use printf and scanf only
