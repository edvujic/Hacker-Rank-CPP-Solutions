#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int rows;
    int question;
    //declare the vars

    cin>>rows;
    cin>>question;
    //get input

    //declare vector of vectors
    vector<vector<int>> my_vector;

    for(int i=0; i<rows; i++)
    {
        int elementNum;
        cin>>elementNum;
        //get number of elements to be inserted in a row
        
        vector<int> tempVec;
        //temporary insertion vector

        for (int j = 0; j<elementNum; j++)
        {
            int insertNum;
            cin>>insertNum;
            tempVec.push_back(insertNum);
        }
        //add to main vector to make 2D vector
        my_vector.push_back(tempVec);
        
    }

    //questions part
    int row, col;
    for (int k = 0; k<question; k++)
    {
        cin>>row>>col;
        cout<<my_vector[row][col]<<endl;
        //print for respective row and column

    }

    return 0;
}
