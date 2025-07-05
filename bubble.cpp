#include <vector>
#include <iostream>
#include "bubble.hpp"

using namespace std;

void bubble(vector<int>& v, int n){
    int comparacoes = 0;
    int roda = 0; 
    int troca = 0;
    for(int j = 0; j < n - 1; j++){
        for(int i = 0; i < n - j; i++){
            if(v[i] > v[i+1]){
                swap(v[i], v[i+1]);
                troca++;
            }
            comparacoes++;
        }
        roda++;
    }
    cout << "Bubble sort" << endl;
    cout << "O primeiro laço for rodou " << roda << " vezes." << endl;
    cout << "Foram feitas " << comparacoes << " comparações." << endl;
    cout << "Foram feitas " << troca << " trocas." << endl;
}
