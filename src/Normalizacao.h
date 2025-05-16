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
    cout << "De o numero de dimensoes do vetor: " << endl;
    cin >> dimensao;

    // Alocar dinamicamente o vetor
    vet = new float[dimensao];

    // cout << endl << "De os valores do vetor: " << endl;
    // for (int i = 0; i < dimensao; i++)
    // {
    //     cin >> vet[i];
    // }

    // // Calcular a norma euclidiana
    // NormaEuclidiana normaEuclidiana;
    // float norma = normaEuclidiana.calcularNorma_FuncaoInterna(vet, dimensao);

    // Verificar se a norma é diferente de zero antes de realizar a divisão
    // if (norma != 0.0)
    // {
    //     // Normalizar o vetor
    //     DivisaoPorEscalar divisaoPorEscalar;
    //     float *resultado = divisaoPorEscalar.divisaoPorEscalar_FuncaoInterna(dimensao, vet, norma);

    //     // Exibir o vetor resultante
    //     cout << endl << "Vetor normalizado: [";
    //     for (int i = 0; i < dimensao; i++)
    //     {
    //         if (dimensao - 1 == i)
    //         {
    //             cout << resultado[i] << "]" << endl;
    //         }
    //         if (dimensao - 1 != i)
    //         {
    //             cout << resultado[i] << ", ";
    //         }
    //     }

    //     // Liberar a memória alocada dinamicamente
    //     delete[] resultado;
    // }
    // else
    // {
    //     cout << "Não é possível normalizar um vetor com norma zero." << endl;
    // }

    // Liberar a memória alocada dinamicamente para o vetor original
    delete[] vet;
}