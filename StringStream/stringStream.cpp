#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
    
    for (int i = 0; i<str.size(); i++)
    {
        if(str[i]==',')
            str[i]=' ';
    }
    //remove the comas

    stringstream s(str);
    int temp;
    vector<int> numbers; //to be returned to main
    
    while(s >> temp)
        numbers.push_back(temp);

    return numbers;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
