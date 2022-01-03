#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){                                      // no. of test cases
        int n;
        cin>>n;

        int A[n], B[] = {0};
        for (int i=0; i<n; i++){
            cin>>A[i];                               // take inputs
        }

        int product, sum, max=0;
        for (int i=0; i<n; i++){                      
            sum = 0;
            for (int j=i+1; j<n; j++){               // iterating the array 
                product = A[i] * A[j];               // product of each element with every other element
                while(product > 0){
                    int r = product % 10;
                    sum += r;
                    product /= 10;                   // summation of each digit in the product
                }
                if (max < sum){                      // if max less than sum max = sum
                    max = sum;
                }
                sum = 0;
            }
        }

        cout<<max<<endl;                             // output
    }

    return 0;
}