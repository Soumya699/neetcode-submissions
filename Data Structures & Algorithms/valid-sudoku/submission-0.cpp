#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int rows=0;rows<9;rows++){
            unordered_set<char> seen;
        for(int col=0;col<9;col++){
            char current=board[rows][col];
            if(current=='.'){
                continue;
            }if(seen.find(current)!=seen.end()){
                return false;
            }seen.insert(current);
        }
    }for(int col=0;col<9;col++){
        unordered_set<char>seen;
        for(int rows=0;rows<9;rows++){
            char current=board[rows][col];
            if(current=='.'){
                continue;
            }if(seen.find(current)!=seen.end()){
                return false;
            }seen.insert(current);
        }
    
    }for(int box=0;box<9;box++){
        unordered_set<char>seen;
    int startRow=(box/3)*3;
    int startCol=(box%3)*3;
    for(int row=startRow;row<startRow+3;row++){
        
        for(int col=startCol;col<startCol+3;col++){
            char current=board[row][col];
            if(current=='.'){
                continue;
            }
            if(seen.find(current)!=seen.end()){
                return false;
            }seen.insert(current);
        }
    }
}return true;
    }
};
