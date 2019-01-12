#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long int T;
    cin >> T;
    if((T >= 1) && (T <= 10^6))
    {
        unsigned long int c[T], n[T];
        unsigned long int prev_cell;
        int i = 0;
        do
        {
            cin >> c[i];
            cin >> n[i];
            if(i==0)
                prev_cell = n[0];
            cout << (prev_cell*c[i]) << endl;
            prev_cell += 1 + 3*n[i]*(n[i]+1);
            i++;
        }while(i < T);
    }
    return 0;
}