#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> arrConversion(const vector<int>& arr,int rows,int cols){
    vector<vector<int>> matrix(rows,vector<int>(cols));{
        for (int row = 0; row < rows; row++)
        {
            for (int col = 0; col < cols; col++)
            {
                matrix[row][col] = arr[row * col + col];
            }
            
        }
        
    };
    return matrix;
}
void Display(const vector<vector<int>>& matrix){
    for (auto& row:matrix)
    {
        for (int val:row)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int rows = 3, cols = 3;

    vector<vector<int>> matrix = arrConversion(arr,rows,cols);
    Display(matrix);
    return 0;
}