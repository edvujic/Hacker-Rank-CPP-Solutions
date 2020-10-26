#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Print array in reverse order.
*/



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; // number of array elements
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i ++)
        cin>>arr[i];
    
    //print reversed
    for(int j = n-1; j >= 0; j--)
        cout<<arr[j]<<" ";
    return 0;
}
