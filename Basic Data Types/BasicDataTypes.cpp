#include <iostream>
#include <cstdio>
using namespace std;
/*

    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value

*/
// scanf and printf are faster than cin and cout

/*TASK: Input consists of the following space-separated values: int, long, char, float, and double, respectively.
Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
*/

int main() {
    // Complete the code.
    int number;
    long number2;
    char ch;
    float number3;
    double number4;
    //declare variables

    cin >> number >> number2 >> ch >> number3 >> number4;
    //store variables

    //print values
    printf("%d\n%ld\n%c\n%f\n%lf\n", number, number2, ch, number3, number4);
    
    return 0;
}
