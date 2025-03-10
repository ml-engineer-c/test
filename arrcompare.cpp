#include <iostream>
#include <vector>

using namespace std;

void comparison(vector<int> parent,vector<int> child){
    int temp;
    for (int i = 0; i < parent.size(); i++)
    {
        temp = parent[i];
        int j;
        while (true)
        {
            if (child[j] > temp)
            {
                cout<<child[j]<<endl;
            }
            else
            {
                cout<<temp<<endl;
            }    
            // cout<<child[j]<<endl;
            j++;
            break;
        }
        
    }
    
}

int main(){
    vector<int> parent = {2,5,3,6,43,4};
    vector<int> child = {7,3,23,5,2};
    comparison(parent,child);
    return 0;
}