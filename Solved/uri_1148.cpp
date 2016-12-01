#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000

int main() {
    // freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt", "r", stdin);
    int n, a;
    while(scanf("%d%d", &n, &a)!=EOF) {
        if(n==0 && a == 0 ) break;
        int mat[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = INF;
            }
            mat[i][i] = 0;
        }
        for (int i = 0; i < a; i++) {
            int from, to, weight;
            scanf("%d%d%d", &from, &to, &weight);
            from--;
            to--;
            if (mat[to][from] != INF) {
                mat[from][to] = 0;
                mat[to][from] = 0;
            } else {
                mat[from][to] = weight;
            }

        }
        /*
        cout << "-------------------------" << endl;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }

            cout << endl;
    }
         */
        // cout << "-------------------------" << endl;
        for (int k = 0; k < n; k++)
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);

        int tc;
        scanf("%d", &tc);
        for (int i = 0; i < tc; i++) {
            int from, to;
            scanf("%d%d", &from, &to);
            from--;
            to--;
            if (mat[from][to] == INF) {
                printf("Nao e possivel entregar a carta\n");
            } else {
                printf("%d\n", mat[from][to]);
            }
        }
        cout << endl;

    }


    return 0;
}