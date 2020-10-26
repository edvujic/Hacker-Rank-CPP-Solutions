#include <stdio.h>
/* TASK:
Complete the update function in the editor below.

update has the following parameters:

    int *a: an integer
    int *b: an integer
The function is declared with a void return type, so there is no value to return. Modify the values in memory so that a contains their sum and b contains their absoluted difference. 
*/
void update(int *a,int *b) {
    // Complete this function 
    //store temporary values so values don't get lost
    int temp_a = *a;
    int temp_b = *b;

    *a = temp_a+temp_b;
    //add values to a
    *b = temp_a-temp_b;
    //substract values to b and check if b smaller than 0
    if(*b<0)
        *b = *b*(-1);


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
