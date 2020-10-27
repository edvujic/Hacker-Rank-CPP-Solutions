#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int N;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    int x, a, b;
    cin >> x;
    v.erase(v.begin() + x - 1);
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    cout << v.size() << endl;
    
    for(auto itr: v)
        cout<<itr<<" ";
    cout << endl;
    
    return 0;
}
