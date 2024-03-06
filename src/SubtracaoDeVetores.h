#include <iostream>
using namespace std;

#ifndef SUBTRACAODEVETORES_H_INCLUDED
#define SUBTRACAODEVETORES_H_INCLUDED

class SubtracaoDeVetores
{
private:
    float *vet1;
    float *vet2;
    int dimensao;

public:
    SubtracaoDeVetores();
    ~SubtracaoDeVetores();
    void subtrairVetores();
};

#endif // SUBTRACAODEVETORES_H_INCLUDED

SubtracaoDeVetores::SubtracaoDeVetores(){}

SubtracaoDeVetores::~SubtracaoDeVetores()
{
    delete[] vet1;
    delete[] vet2;
}

void SubtracaoDeVetores::subtrairVetores()
{   
    cout << "De o numero de dimensoes dos vetores: "<< endl;
    cin >> dimensao;

    vet1 = new float[dimensao];
    vet2 = new float[dimensao];

    cout << endl << "Digite os valores do primeiro vetor: " << endl;
    for (int i = 0; i < dimensao; i++)
    {
        cin >> vet1[i];
    }
    cout << endl << "Digite os valores do segundo vetor: " << endl;
    for (int i = 0; i < dimensao; i++)
    {
        cin >> vet2[i];
    }

    float *resultado = new float[dimensao];
    for (int i = 0; i < dimensao; i++)
    {
        resultado[i] = vet1[i] - vet2[i];
    }

    cout << endl << "Vetor resultante: [";
    for (int i = 0; i < dimensao; i++)
    {   
        if (dimensao - 1 == i)
        {
            cout << resultado[i] << "]" << endl;
        }
        if (dimensao - 1 != i)
        {
            cout << resultado[i] << ", ";
        }
    }
}