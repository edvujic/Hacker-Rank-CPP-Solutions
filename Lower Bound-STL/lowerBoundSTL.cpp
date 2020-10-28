#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    vector<int> v;

    int num;
    for(int i = 0; i<N; i++)
    {
        cin>>num;
        v.push_back(num);
    }

    int val;
    int Q;

    vector<int>::iterator low;
    cin>>Q;
    for (int i=0; i<Q; i++){
       cin >> val;

       vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);
       
       if (v[low - v.begin()] == val)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
   }

    return 0;
}
