#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void bfs(int start_x, int start_y, int h, int w, vector<vector<int>>& matrix) {
	queue<pair<int, int>> q;
	q.push({ start_x, start_y });
	matrix[start_x][start_y] = 0;

	while (!q.empty()) {
		pair<int, int> current = q.front();
		q.pop();

		for (int i = 0; i < 8; i++) {
			int next_x = current.first + dx[i];
			int next_y = current.second + dy[i];

			if (next_x >= 0
				&& next_x < h
				&& next_y >= 0
				&& next_y < w
				&& matrix[next_x][next_y] == 1) {
				matrix[next_x][next_y] = 0;
				q.push({ next_x, next_y });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int w, h;
	vector<int> result;

	while (true) {
		cin >> w >> h;

		if (w == 0 && h == 0) {
			break;
		}

		vector<vector<int>> matrix(h, vector<int>(w));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> matrix[i][j];
			}
		}

		int island = 0;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (matrix[i][j] == 1) {
					island++;
					bfs(i, j, h, w, matrix);
				}
			}
		}
		result.push_back(island);
	}

	for (int val : result) {
		cout << val << '\n';
	}

	return 0;
}