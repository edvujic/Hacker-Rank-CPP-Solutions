#include <iostream>
#include <string>
using namespace std;
void printRequirements(string a, string b)
{
    cout<<a.size()<<" "<<b.size()<<endl;
    //print size

    cout<<a+b<<endl;
    //print concenated

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    //change first elements

    cout<<a<<" "<<b<<endl;
    //print changed strings
}
int main() {

    string a, b;
    cin>>a>>b;
    //get input
    
    printRequirements(a,b);
  
    return 0;
}
