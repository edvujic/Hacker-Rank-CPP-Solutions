#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector <int> v;
    int N;
    cin>>N;
    for(int i = 0; i<N; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }  
    sort(v.begin(), v.end());
    for(auto itr: v)
        cout<<itr<<" ";
    cout<<endl;
    return 0;
}
