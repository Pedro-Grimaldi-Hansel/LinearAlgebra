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
    
    if(vet1.size() != vet2.size() ) {
        cout << "\nErro: Vetores de diferentes dimensoes. A operacao de adicao nao pode ser realizada adicione novamente os vetores.\n\n";
            vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z,...): ");
            vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z,...): ");
    }

    vector<double> resultado(vet1.size());
    for (size_t i = 0; i < vet1.size(); i++) {
        resultado[i] = vet1[i] + vet2[i];
    }

    cout << "\nResultado da soma: ";
    LeitorDeVetores::printVector(resultado);
    cout << endl;
}

#endif // ADICAODEVETORES_H_INCLUDED
