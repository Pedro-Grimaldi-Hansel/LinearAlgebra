#ifndef ADICAODEVETORES_H_INCLUDED
#define ADICAODEVETORES_H_INCLUDED

#include <vector>
#include <iostream>
#include <algorithm>
#include "LeitorDeVetores.h"

using namespace std;

class AdicaoDeVetores {
public:
    static void adicionarVetores();
};

inline void AdicaoDeVetores::adicionarVetores() {
    vector<double> vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z,...): ");
    vector<double> vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z,...): ");

    LeitorDeVetores::printVector(vet1);
    LeitorDeVetores::printVector(vet2);

    size_t maxDim = max(vet1.size(), vet2.size());
    vet1.resize(maxDim, 0.0);
    vet2.resize(maxDim, 0.0);

    vector<double> resultado(maxDim);
    for (size_t i = 0; i < maxDim; i++) {
        resultado[i] = vet1[i] + vet2[i];
    }

    cout << "\nResultado da soma: ";
    LeitorDeVetores::printVector(resultado);
    cout << endl;
}

#endif // ADICAODEVETORES_H_INCLUDED
