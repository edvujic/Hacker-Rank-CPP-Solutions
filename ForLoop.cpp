#include <iostream>
#include <cstdio>
using namespace std;
/* TASK: Loop through range
Given two variables a and b, with the condition a<=b
for each integer in the [a,b] interval
    print string value of number (i.e "one", "two" etc.)
    if number is bigger than 9 and even print "even" if odd print "odd"
    NOTE: [a, b] ={x is an element of Z such that a<=x<=b} = {a, a+1, ..., b}
    
*/
int main() {
    // Complete the code.
    int a, b;
    cin>>a>>b;
    // get input

    for(int i = a; i<=b; i++)
    {
        if(i>=1 && i<=9)
        {
        if(i == 1)
            cout<<"one"<<"\n";
        else if(i == 2)
            cout<<"two"<<"\n";
        else if(i == 3)
            cout<<"three"<<"\n";
        else if(i == 4)
            cout<<"four"<<"\n";
        else if(i == 5)
            cout<<"five"<<"\n";
        else if(i == 6)
            cout<<"six"<<"\n";
        else if(i == 7)
            cout<<"seven"<<"\n";
        else if(i == 8)
            cout<<"eight"<<"\n";
        else if(i == 9)
            cout<<"nine"<<"\n";
        }
        //inconvenient but accepted
        else
        {
            if(i%2==0)
                cout<<"even"<<"\n";
            else
                cout<<"odd"<<"\n";
        }
        
    }
    
    return 0;
}
