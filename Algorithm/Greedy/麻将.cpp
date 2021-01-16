//BZOJ 1028
#include <cstdio>
#include <algorithm>

const int MAXN = 400;
const int MAXM = 1000;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    static int a[MAXN];
    for (int i = 0; i < m * 3 + 1; i++) {
        int x;
        scanf("%d", &x);
        a[x - 1]++;
    }

    static int ans[MAXN];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        static int b[MAXN];
        std::copy(a, a + n, b);
        b[i]++;

        for (int j = 0; j < n; j++) {
            if (b[j] >= 2) {
                static int c[MAXN + 2];
                std::copy(b, b + n, c);
                c[j] -= 2;

                for (int k = 0; k < n; k++) {
                    if (c[k] == 0) continue;
                    c[k] %= 3;
                    int x = std::min(std::min(c[k], c[k + 1]), c[k + 2]);
                    if (x < c[k]) goto fail;
                    c[k] -= x, c[k + 1] -= x, c[k + 2] -= x;
                }

                goto success;

fail:;
            }
        }

        continue;

success:
        ans[cnt++] = i + 1;
    }

    if (cnt) {
        for (int i = 0; i < cnt; i++) printf("%d%c", ans[i], i == cnt - 1 ? '\n' : ' ');
    } else puts("NO");

    return 0;
}
