#ifndef ADICAODEVETORES_H_INCLUDED
#define ADICAODEVETORES_H_INCLUDED

#include <vector>
#include <iostream>
#include <algorithm>
#include "LeitorDeVetores.h"

using namespace std;

class AdicaoDeVetores {
public:
    static vector<double> adicionarVetores(vector<double>, vector<double>);
};

inline vector<double> AdicaoDeVetores::adicionarVetores(vector<double> vet1, vector<double> vet2) {
    if(vet1.size() != vet2.size() ) {
        cout << "\nErro: Vetores de diferentes dimensoes. A operacao de adicao nao pode ser realizada.\n\n";
        return {};
    }
    vector<double> result(vet1.size());
    for (size_t i = 0; i < vet1.size(); i++) {
        result[i] = vet1[i] + vet2[i];
    }
    return result;
}

#endif // ADICAODEVETORES_H_INCLUDED
