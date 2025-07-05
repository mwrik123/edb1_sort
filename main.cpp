#include <vector>
#include <iostream>
#include <chrono>
#include "selection.hpp"
#include "geravetores.hpp"
#include "bubble.hpp"
#include "insertion.hpp"
#include "quick.hpp"
#include "merge.hpp"

using namespace std;
using namespace chrono;

int main(){
    vector<int> tamanho{100, 500, 1000, 2000, 5000};
    for(int i = 0; i < 5; i++){
        vector <int> v(tamanho[i]);
        gerarAleatorio(v);
        cout << "Vetor aleatório de tamanho " << tamanho[i] << ":" << endl;
        auto iniciobb = high_resolution_clock::now();
        bubble(v, tamanho[i]);
        auto fimbb = high_resolution_clock::now();
        auto duracaobb = duration_cast<milliseconds>(fimbb - iniciobb).count();
        cout << "Duração: " << duracaobb << endl;
        cout << "-----------------------------------------------------------" << endl;
        gerarAleatorio(v);
        auto inicios = high_resolution_clock::now();
        selection(v, tamanho[i]);
        auto fims = high_resolution_clock::now();
        auto duracaos = duration_cast<milliseconds>(fims - inicios).count();
        cout << "Duração: " << duracaos << endl;
        cout << "-----------------------------------------------------------" << endl;
        gerarAleatorio(v);
        auto inicioi = high_resolution_clock::now();
        insertion(v, tamanho[i]);
        auto fimi = high_resolution_clock::now();
        auto duracaoi = duration_cast<milliseconds>(fimi - inicioi).count();
        cout << "Duração: " << duracaoi << endl;
        cout << "-----------------------------------------------------------" << endl;
        gerarAleatorio(v);
        int compara = 0;
        int troca = 0;
        auto inicioq = high_resolution_clock::now();
        quick(v, 0, i, compara, troca);
        auto fimq = high_resolution_clock::now();
        auto duracaoq = duration_cast<milliseconds>(fimq - inicioq).count();
        cout << "Quick sort" << endl;
        cout << "Foram feitas " << compara << " comparações." << endl;
        cout << "Foram feitas " << troca << " trocas." << endl;
        cout << "Duração: " << duracaoq << endl;
        cout << "-----------------------------------------------------------" << endl;
        compara = 0;
        troca = 0;
        auto iniciom = high_resolution_clock::now();
        merge(v, 0, i, compara, troca);
        auto fimm = high_resolution_clock::now();
        auto duracaom = duration_cast<milliseconds>(fimm - iniciom).count();
        cout << "Merge sort" << endl;
        cout << "Foram feitas " << compara << " comparações." << endl;
        cout << "Foram feitas " << troca << " trocas." << endl;
        cout << "Duração: " << duracaom << endl;
        cout << "-----------------------------------------------------------" << endl;

    }
    for(int i = 0; i < 5; i++){
        vector <int> v(tamanho[i]);
        gerarQuaseOrdenado(v);
        cout << "Vetor quase ordenado de tamanho " << tamanho[i] << ":" << endl; 
        auto iniciobb = high_resolution_clock::now();
        bubble(v, tamanho[i]);
        auto fimbb = high_resolution_clock::now();
        auto duracaobb = duration_cast<milliseconds>(fimbb - iniciobb).count();
        cout << "Duração: " << duracaobb << endl;
        cout << "-----------------------------------------------------------" << endl;
        gerarQuaseOrdenado(v);
        auto inicios = high_resolution_clock::now();
        selection(v, tamanho[i]);
        auto fims = high_resolution_clock::now();
        auto duracaos = duration_cast<milliseconds>(fims - inicios).count();
        cout << "Duração: " << duracaos << endl;
        cout << "-----------------------------------------------------------" << endl;
        gerarQuaseOrdenado(v);
        auto inicioi = high_resolution_clock::now();
        insertion(v, tamanho[i]);
        auto fimi = high_resolution_clock::now();
        auto duracaoi = duration_cast<milliseconds>(fimi - inicioi).count();
        cout << "Duração: " << duracaoi << endl;
        cout << "-----------------------------------------------------------" << endl;
        gerarQuaseOrdenado(v);
        int compara = 0;
        int troca = 0;
        auto inicioq = high_resolution_clock::now();
        quick(v, 0, i, compara, troca);
        auto fimq = high_resolution_clock::now();
        auto duracaoq = duration_cast<milliseconds>(fimq - inicioq).count();
        cout << "Quick sort" << endl;
        cout << "Foram feitas " << compara << " comparações." << endl;
        cout << "Foram feitas " << troca << " trocas." << endl;
        cout << "Duração: " << duracaoq << endl;
        cout << "-----------------------------------------------------------" << endl;
        compara = 0;
        troca = 0;
        auto iniciom = high_resolution_clock::now();
        merge(v, 0, i, compara, troca);
        auto fimm = high_resolution_clock::now();
        auto duracaom = duration_cast<milliseconds>(fimm - iniciom).count();
        cout << "Merge sort" << endl;
        cout << "Foram feitas " << compara << " comparações." << endl;
        cout << "Foram feitas " << troca << " trocas." << endl;
        cout << "Duração: " << duracaom << endl;
        cout << "-----------------------------------------------------------" << endl;
    }
    for(int i = 0; i < 5; i++){
        vector <int> v(tamanho[i]);
        gerarInverso(v);
        cout << "Vetor inverso de tamanho " << tamanho[i] << ":" << endl; 
        auto iniciobb = high_resolution_clock::now();
        bubble(v, tamanho[i]);
        auto fimbb = high_resolution_clock::now();
        auto duracaobb = duration_cast<milliseconds>(fimbb - iniciobb).count();
        cout << "Duração: " << duracaobb << endl;
        cout << "-----------------------------------------------------------" << endl;
        gerarInverso(v);
        auto inicios = high_resolution_clock::now();
        selection(v, tamanho[i]);
        auto fims = high_resolution_clock::now();
        auto duracaos = duration_cast<milliseconds>(fims - inicios).count();
        cout << "Duração: " << duracaos << endl;
        cout << "-----------------------------------------------------------" << endl;
        gerarInverso(v);
        auto inicioi = high_resolution_clock::now();
        insertion(v, tamanho[i]);
        auto fimi = high_resolution_clock::now();
        auto duracaoi = duration_cast<milliseconds>(fimi - inicioi).count();
        cout << "Duração: " << duracaoi << endl;
        cout << "-----------------------------------------------------------" << endl;
        gerarInverso(v);
        int compara = 0;
        int troca = 0;
        auto inicioq = high_resolution_clock::now();
        quick(v, 0, i, compara, troca);
        auto fimq = high_resolution_clock::now();
        auto duracaoq = duration_cast<milliseconds>(fimq - inicioq).count();
        cout << "Quick sort" << endl;
        cout << "Foram feitas " << compara << " comparações." << endl;
        cout << "Foram feitas " << troca << " trocas." << endl;
        cout << "Duração: " << duracaoq << endl;
        cout << "-----------------------------------------------------------" << endl;
        compara = 0;
        troca = 0;
        auto iniciom = high_resolution_clock::now();
        merge(v, 0, i, compara, troca);
        auto fimm = high_resolution_clock::now();
        auto duracaom = duration_cast<milliseconds>(fimm - iniciom).count();
        cout << "Merge sort" << endl;
        cout << "Foram feitas " << compara << " comparações." << endl;
        cout << "Foram feitas " << troca << " trocas." << endl;
        cout << "Duração: " << duracaom << endl;
        cout << "-----------------------------------------------------------" << endl;
    }
}