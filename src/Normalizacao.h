#ifndef NORMALIZACAO_H_INCLUDED
#define NORMALIZACAO_H_INCLUDED

#include <iostream>
#include <vector>


using namespace std;

class Normalizacao
{
public:
    static vector<double> normalizarVetor(vector<double>);
};

inline vector<double> Normalizacao::normalizarVetor(vector<double> vet)
{
    vector<double> result;
    double norma = NormaEuclidiana::normaEuclidiana(vet);
    for(int i = 0; i < vet.size(); i++)
    {
        result.push_back(vet[i] / norma);
    }
    return result;
}

#endif // NORMALIZACAO_H_INCLUDED