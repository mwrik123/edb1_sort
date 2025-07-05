#include <vector>
#include "insertion.hpp"
#include <iostream>

using namespace std;

void insertion(vector<int>& v, int n){
    int rodades = 0;
    int desloca = 0;
    int troca = 0;
    for(int i = 1; i < n; i++){
        int novo = v[i];
        int fim = i-1;
        rodades++;
        while(novo <= v[fim] && fim >= 0){
            v[fim+1] = v[fim];
            fim = fim -1;
            desloca++;
        }
        v[fim+1] = novo;
        troca++;
    }
    cout << "Insertion sort" << endl;
    cout << "O primeiro laço for rodou " << rodades << " vezes." << endl;
    cout << "O vetor foi deslocado " << desloca << " vezes." << endl;
    cout << "Foram feitas " << troca << " trocas." << endl;
}