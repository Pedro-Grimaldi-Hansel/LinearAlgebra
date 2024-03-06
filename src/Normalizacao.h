#include <iostream>
using namespace std;

#ifndef NORMAEUCLIDIANA_H_INCLUDED  // PARA USAR OUTROS ARQUIVOS .h É NECESSÁRIO INCLUIR O NOME DO ARQUIVO COM O #ifndef #define #endif
#define NORMAEUCLIDIANA_H_INCLUDED

    #include "NormaEuclidiana.h"

#endif // NORMAEUCLIDIANA_H_INCLUDED


#ifndef NORMALIZACAO_H_INCLUDED
#define NORMALIZACAO_H_INCLUDED

class Normalizacao
{
private:
    float *vet;
    int dimensao;
public:
    Normalizacao();
    ~Normalizacao();
    void normalizarVetor();
};

#endif // NORMALIZACAO_H_INCLUDED

Normalizacao::Normalizacao(){}


Normalizacao::~Normalizacao()
{
    delete[] vet;
}

void Normalizacao::normalizarVetor()
{
    cout << "De o numero de dimensoes do vetor: "<< endl;
    cin >> dimensao;

    cout << endl<< "De os valores do vetor: "<< endl;
    for (int i = 0; i < dimensao; i++)
    {
        cin >> vet[i];
    }

    NormaEuclidiana normaEuclidiana;
    float norma = normaEuclidiana.calcularNorma_FuncaoInterna(vet, dimensao);
    
    float *resultado = new float[dimensao];
}