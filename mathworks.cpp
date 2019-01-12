#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int prime[10][2] = {
    {101, 103},       //0
    {11,  17},        //1
    {2,   23},        //2
    {3,   13},        //3
    {41,  43},        //4
    {5,   53},        //5
    {61,  67},        //6
    {7,   17},        //7
    {83,  89},        //8
    {19,  29}         //9
};
int digSum(int n) 
{ 
    int sum = 0; 
    while(n > 0 || sum > 9) 
    { 
        if(n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        n /= 10; 
    } 
    return sum; 
} 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long int T;
    unsigned long int i = 0;
    unsigned long long int n,a,b,c,d,e;
    unsigned long long int ll, last, digit;
    
    cin >> T;
    do{
        cin >> n;
        last = n % 10;
        a = n%prime[last][0];
        if(a==0){
            b = n%prime[last][1];
            if(b==0){
                digit = digSum(n);
                c = digit/10;
                if( n%c == 0 ){
                    d = digit%10;
                    if( n%d == 0 ){
                        e = n / (n>>4)*2;
                        if( n%e == 0 ){
                            cout << "YES" << endl;
                        }else
                            cout << "NO" << endl;
                    }else
                        cout << "NO" << endl;
                }else
                    cout << "NO" << endl;
            }else
                cout << "NO" << endl;
        }else
            cout << "NO" << endl;
        i++;
    }while(i < T);
    return 0;
}