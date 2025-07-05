#include "merge.hpp"
#include <vector>

using namespace std;

void inter(vector<int>& v, int i, int meio, int f, int c, int t) {
    vector<int> esquerda(v.begin() + i, v.begin() + meio + 1);
    vector<int> direita(v.begin() + meio + 1, v.begin() + f + 1);
    int p = 0, g = 0, k = i;
    while (p < esquerda.size() && g < direita.size()) {
        c++;
        if (esquerda[p] <= direita[g]) {
            v[k++] = esquerda[p++];
        } else {
            v[k++] = direita[g++];
            t++;
        }
    }
    while (p < esquerda.size()) {
        v[k++] = esquerda[p++];
    }
    while (g < direita.size()) {
        v[k++] = direita[g++];
    }
}

void merge(vector<int>& v, int i, int f, int c, int t) {
    if (i < f) {
        int meio = (i + f) / 2;
        merge(v, i, meio, c, t);
        merge(v, meio + 1, f, c, t);
        inter(v, i, meio, f, c, t);
    }
}
