#include "selection.hpp"
#include <vector>
#include <iostream>

using namespace std;

void selection(vector<int>& v, int n){
    int menor = 0;
    int roda = 0;
    int verifica = 0;
    int troca = 0;
    int mudamenor = 0;
    for(int j = 0; j < n; j++){
        for(int i = j; i < n; i++){
            if(i == j){
                menor = i;
            } else {
                if(v[i] < v[menor]){
                    menor = i;
                    mudamenor++;
                }
            }
            verifica++;
        }
        if(v[menor] != v[j]){
            swap(v[j], v[menor]);
            troca++;
        }
        roda++;
    }
    cout << "Selection sort" << endl;
    cout << "O primeiro laço for rodou " << roda << " vezes." << endl;
    cout << "Foram feitas " << verifica << " verificações." << endl;
    cout << "O menor número foi mudado " << mudamenor << " vezes." << endl;
    cout << "Foram feitas " << troca << " trocas no vetor." << endl;
}