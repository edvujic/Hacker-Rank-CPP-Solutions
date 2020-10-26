#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num1;
    int num2;
    int num3;


    // declare the variables
    cin >> num1 >> num2 >> num3;

    // apply the constraint
    int check = 1; // assume constraint true initially
    if(num1 < 1 || num1 > 1000)
        check = 0;
    else if (num2 < 1 || num2 > 1000)
        check = 0;
    else if (num3 < 1 || num3 > 1000)
        check = 0;
    //end of constrain check

    if (check) // check boolean value
        cout << num1 + num2 + num3 << endl;
        // print sum in one line
    return 0;
}
