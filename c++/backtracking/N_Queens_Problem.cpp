#include<iostream>
#include<vector>
using namespace std;
void printSolution(vector<vector<char>>&board,int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
bool isSafe(int row,int col,vector<vector<char>>&board,int n){
    // Can we place the queen on the current cell or not?
    // Check three directions -> upper left diagonal, left row, bottom left diagonal

    int i = row;
    int j = col;

    // Check left row first
    while(j>=0){
        if(board[i][j] == 'Q'){ // Queen found and hence can't place it here
            return false;
        }
        j--;
    }
    // Check upper left diagonal
    i = row;
    j = col;
    while(i>=0 && j>=0){
        if(board[i][j] == 'Q'){ // Queen found and hence can't place it here
            return false;
        }
        i--;
        j--;
    }
    // Check bottom left diagonal
    i = row;
    j = col;
    while(i<n && j>=0){
        if(board[i][j] == 'Q'){ // Queen found and hence can't place it here
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve(vector<vector<char>>&board,int col,int n){
    // Base Case -> When we have placed queens in all the columns then col will go to n
    if(col >= n){
        printSolution(board,n);
        return;
    }
    // Just Solve one case 
    // In every row, place the queen
    for(int row = 0;row<n;row++){
        if(isSafe(row,col,board,n)){
            // Place it then
            board[row][col] = 'Q'; 
            // Recursive call for col + 1
            solve(board,col+1,n);
            // Backtracking -> Create original state
            board[row][col] = '-'; // Queen removed 
        }
    }
}
int main(){
    int n = 3;
    // Initially all are zeroes in the nxn chessboard
    vector<vector<char>>board(n,vector<char>(n,'-')); 
    int col = 0;
    solve(board,col,n);
    return 0;
}