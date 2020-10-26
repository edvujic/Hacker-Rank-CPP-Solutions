#include <bits/stdc++.h>

using namespace std;
/*
Given a positive integer, if integer 1<= number <= 9 print string value
Example: input 1 - output one
if number bigger than 9, then print "bigger than 9"
*/


int main()
{
    //get intput
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //sets the maximum number of inputs to ignore in case of invalid input

    // Write Your Code Here
    if (n == 1)
        cout<<"one"<<"\n";
    else if (n == 2)
        cout<<"two"<<"\n";
    else if (n == 3)
        cout<<"three"<<"\n";
    else if (n == 4)
        cout<<"four"<<"\n";
    else if (n == 5)
        cout<<"five"<<"\n";
    else if (n == 6)
        cout<<"six"<<"\n";
    else if (n == 7)
        cout<<"seven"<<"\n";
    else if (n == 8)
        cout<<"eight"<<"\n";
    else if (n == 9)
        cout<<"nine"<<"\n";
    else
        cout<<"Greater than 9"<<"\n";
    //pretty inconvenient but accepted

    return 0;
}
