// https://leetcode.com/problems/sort-the-matrix-diagonally/
//
// Time Complexity:     O(`nRows` * `nCols` * lg(`nRows` * `nCols`))
// Space Complexity:    O(`nRows` * `nCols`)
//
// References:
//  https://leetcode.com/problems/sort-the-matrix-diagonally/discuss/489749/JavaPython-Straight-Forward
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > diagonalSort(vector<vector<int> >& matrix) {
        const int nRows = matrix.size(), nCols = matrix[0].size();
        
        unordered_map<int, priority_queue<int, vector<int>, greater<int> > > map;
        
        for(int row = 0; row < nRows; ++row){
            for(int col = 0; col < nCols; ++col){
                map[row - col].push(matrix[row][col]);
            }
        }
        
        for(int row = 0; row < nRows; ++row){
            for(int col = 0; col < nCols; ++col){
                matrix[row][col] = map[row - col].top();
                map[row - col].pop();
            }
        }
        
        return matrix;
    }
};