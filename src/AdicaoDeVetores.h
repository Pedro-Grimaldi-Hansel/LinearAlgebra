#include <iostream>
#include <vector>
using namespace std;

#ifndef ADICAODEVETORES_H_INCLUDED
#define ADICAODEVETORES_H_INCLUDED

class AdicaoDeVetores
{
private:
    vector<float> vet1;
    vector<float> vet2;

public:
    AdicaoDeVetores();
    void adicionarVetores();
};

#endif // ADICAODEVETORES_H_INCLUDED

AdicaoDeVetores::AdicaoDeVetores() {}

void AdicaoDeVetores::adicionarVetores()
{
    int dimensao;
    cout << "Dê o número de dimensões dos vetores: ";
    cin >> dimensao;

    if (dimensao <= 0) {
        cout << "Dimensão inválida!" << endl;
        return;
    }

    vet1.resize(dimensao);
    vet2.resize(dimensao);

    cout << "\nDigite os valores do primeiro vetor:\n";
    for (int i = 0; i < dimensao; i++) {
        cin >> vet1[i];
    }

    cout << "\nDigite os valores do segundo vetor:\n";
    for (int i = 0; i < dimensao; i++) {
        cin >> vet2[i];
    }

    vector<float> resultado(dimensao);
    for (int i = 0; i < dimensao; i++) {
        resultado[i] = vet1[i] + vet2[i];
    }

    cout << "\nVetor resultante: [";
    for (int i = 0; i < dimensao; i++) {
        cout << resultado[i];
        if (i != dimensao - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

