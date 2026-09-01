class Solution {
public:
    struct State {
        int r;
        int c;
        int energy;
        int mask;
    };

    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size();
        int n = classroom[0].size();

        int sr = -1, sc = -1;
        int litterCount = 0;

        vector<vector<int>> litterId(m, vector<int>(n, -1));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (classroom[i][j] == 'S') {
                    sr = i;
                    sc = j;
                }

                if (classroom[i][j] == 'L') {
                    litterId[i][j] = litterCount;
                    litterCount++;
                }
            }
        }

        if (litterCount == 0)
            return 0;

        int finalMask = (1 << litterCount) - 1;

        vector<vector<vector<int>>> maxEng(
            m,
            vector<vector<int>>(
                n,
                vector<int>(1 << litterCount, -1)
            )
        );

        queue<State> q;

        q.push({sr, sc, energy, 0});
        maxEng[sr][sc][0] = energy;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        int moves = 0;

        while (!q.empty()) {
            int size = q.size();

            while (size--) {
                State curr = q.front();
                q.pop();

                int r = curr.r;
                int c = curr.c;
                int e = curr.energy;
                int mask = curr.mask;

                if (mask == finalMask)
                    return moves;

                if (e == 0)
                    continue;

                for (int i = 0; i < 4; i++) {
                    int nr = r + dr[i];
                    int nc = c + dc[i];

                    if (nr < 0 || nr >= m || nc < 0 || nc >= n)
                        continue;

                    if (classroom[nr][nc] == 'X')
                        continue;

                    int newEnergy = e - 1;
                    int newMask = mask;

                    if (classroom[nr][nc] == 'R') {
                        newEnergy = energy;
                    }
                    else if (classroom[nr][nc] == 'L') {
                        int id = litterId[nr][nc];
                        newMask |= (1 << id);
                    }

                    if (maxEng[nr][nc][newMask] < newEnergy) {
                        maxEng[nr][nc][newMask] = newEnergy;
                        q.push({nr, nc, newEnergy, newMask});
                    }
                }
            }

            moves++;
        }

        return -1;
    }
};