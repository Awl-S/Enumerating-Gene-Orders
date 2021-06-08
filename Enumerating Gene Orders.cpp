#include <iostream>     
#include <algorithm>    
using namespace std;
int main() {
    int n, j = 0, R = 1;
    cin >> n;
    int* myints= new int[n];
    for (int i = 1; i <= n; i++){
        myints[j] = i;
        j++;
        R *= i;
    }
    int c = 0;
    sort(myints, myints + 3);
    cout << R << endl;
        do
        {
            for (int i = 0; i < n; i++)
            {
                cout << myints[i] << " ";
                c++;
                if (c==n)
                {
                    cout << "\n";
                    c = 0;
                }
            }
        } while (next_permutation(myints, myints + n));
    return 0;
}