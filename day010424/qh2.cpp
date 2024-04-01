// http://laptrinhonline.club/problem/mah2
#include <iostream>
#include <vector>

using namespace std;

int totalNQueensHelper(vector<int>& columns, int row, int n) {
    if (row == n) {
        return 1;
    }
    int count = 0;
    for (int col = 0; col < n; ++col) {
        bool canPlace = true;
        for (int prevRow = 0; prevRow < row; ++prevRow) {
            if (columns[prevRow] == col || abs(prevRow - row) == abs(columns[prevRow] - col)) {
                canPlace = false;
                break;
            }
        }
        if (canPlace) {
            columns[row] = col;
            count += totalNQueensHelper(columns, row + 1, n);
        }
    }
    return count;
}

int totalNQueens(int n) { // Hàm trả về số cách đặt n quân hậu trên bàn cờ nxn
    vector<int> columns(n, -1); // Khởi tạo vị trí cột của các quân hậu, -1 nghĩa là chưa đặt
    return totalNQueensHelper(columns, 0, n);
}

int main() {
    int n;
    cin >> n;

    int result = totalNQueens(n);
    cout << result << endl;

    return 0;
}
