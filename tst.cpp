#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> arrayConversion(const vector<int>& arr,int rows,int cols){
     if (arr.size() != rows * cols)
     {
         cerr<<"incorrect number of rows and cols"<<endl;
         return{};
     }

     vector<vector<int>> myMatrix(rows,vector<int>(cols));{
        for (int row=0;row < rows;row++)
        {
            for (int col = 0; col < cols; col++)
            {
                myMatrix [row][col]=arr[row * cols + col];
            }
            
        }

     };
     return myMatrix;
};

void Display(const vector<vector<int>>& matrix ){
    for (auto& row:matrix)
    {
        for (int value : row)
        {
            cout<<value<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    vector<int> myArray = {12,3,5,4};
    int row=2,col=2;

    vector<vector<int>> matrix = arrayConversion(myArray,row,col);
    Display(matrix);
    return 0;
}