#include "quick.hpp"
#include <cstdlib>
#include <ctime>

static bool seed = false;

int particiona(vector<int>& v, int i, int f, int c, int t) {
    if (!seed) {
        srand(time(nullptr));
        seed = true;
    }

    int ind = i + rand() % (f - i + 1);
    swap(v[ind], v[f]);

    int pivo = v[f];
    int p = i - 1;

    for (int j = i; j < f; ++j) {
        c++;
        if (v[j] <= pivo) {
            p++;
            swap(v[p], v[j]);
            t++;
        }
    }

    swap(v[p + 1], v[f]);
    t++;
    return p + 1;
}

void quick(vector<int>& v, int i, int f, int c, int t) {
    if (i < f) {
        int p = particiona(v, i, f, c, t);
        quick(v, i, p - 1, c, t);
        quick(v, p + 1, f, c, t);
    }
}
