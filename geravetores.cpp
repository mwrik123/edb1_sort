#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include "geravetores.hpp"

using namespace std;

vector<int> gerarAleatorio(vector<int>& v) {
    iota(v.begin(), v.end(), 0);
    shuffle(v.begin(), v.end(), default_random_engine(random_device{}()));
    return v;
}

vector<int> gerarQuaseOrdenado(vector<int>& v) {
    iota(v.begin(), v.end(), 0);
    for(int i = 0; i < v.size()/10; ++i)
        swap(v[rand() % v.size()], v[rand() % v.size()]);
    return v;
}

vector<int> gerarInverso(vector<int>& v) {
    iota(v.rbegin(), v.rend(), 0);
    return v;
}
