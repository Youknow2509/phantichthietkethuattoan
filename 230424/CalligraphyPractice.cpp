// http://laptrinhonline.club/problem/khmtk63e2

#include <bits/stdc++.h>

using namespace std;

const int FULL_MASK = (1 << 26) - 1;
unordered_map<int, long long> memo;

// Hàm đệ quy để tính số cách tạo ra tập hợp chữ cái đầy đủ
long long countWays(int index, int current_mask, const vector<int>& bitmasks) {
    if (current_mask == FULL_MASK) {
        // Nếu đã có đủ tất cả các chữ cái, trả về 1
        return 1;
    }
    if (index >= bitmasks.size()) {
        // Nếu đã xét hết chuỗi mà không đủ chữ cái, trả về 0
        return 0;
    }
    // Sử dụng memoization để tránh tính toán lại
    int memo_key = (index << 26) | current_mask;  // Key duy nhất cho mỗi trạng thái
    if (memo.count(memo_key)) {
        return memo[memo_key];
    }

    // Trường hợp bỏ qua chuỗi hiện tại
    long long ways = countWays(index + 1, current_mask, bitmasks);

    // Trường hợp sử dụng chuỗi hiện tại
    int new_mask = current_mask | bitmasks[index];
    ways += countWays(index + 1, new_mask, bitmasks);

    return memo[memo_key] = ways;
}

int main() {

    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<string> strings(n);
    vector<int> bitmasks(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
        for (char c : strings[i]) {
            bitmasks[i] |= (1 << (c - 'a'));
        }
    }
    for (int i = 0; i < strings.size(); ++i) {
        
    }

    // Chỉ bắt đầu từ 0 và không dùng chuỗi nào
    long long result = countWays(0, 0, bitmasks) - 1;
    cout << "Number of ways to form a pangram: " << result << endl;

    return 0;
}
