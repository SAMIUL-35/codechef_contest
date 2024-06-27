#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits.h>

using namespace std;

int maxEscapeTime(vector<vector<char>>& grid, int n, int m) {
    vector<vector<int>> distance(n, vector<int>(m, INT_MAX));
    queue<pair<int, int>> q;
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    // Initialize the queue with all guards' positions
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '1') {
                q.push({i, j});
                distance[i][j] = 0;
            }
        }
    }
    
    // Perform BFS from all guards
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (const auto& [dx, dy] : directions) {
            int nx = x + dx;
            int ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && distance[nx][ny] == INT_MAX) {
                distance[nx][ny] = distance[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    
    // Find the maximum distance for any prisoner
    int maxDist = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '0') {
                maxDist = max(maxDist, distance[i][j]);
            }
        }
    }
    
    return maxDist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    vector<int> results(T);

    for (int t = 0; t < T; ++t) {
        int N, M;
        cin >> N >> M;
        vector<vector<char>> grid(N, vector<char>(M));
        
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> grid[i][j];
            }
        }

        results[t] = maxEscapeTime(grid, N, M);
    }

    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
