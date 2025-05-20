#ifndef PRODUTOVETORIAL_H_INCLUDED
#define PRODUTOVETORIAL_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

class ProdutoVetorial
{
public:
    static vector<double> produtoVetorial(vector<double>, vector<double>);
};

inline vector<double> ProdutoVetorial::produtoVetorial(vector<double> vet1, vector<double> vet2){
    if(vet1.size() != 3 ) {
        cout << "\nErro: o vetor 1 tem que ter 3 dimensões.\n\n";
        return {};
    }
    if(vet2.size() != 3 ) {
        cout << "\nErro: o vetor 2 tem que ter 3 dimensões.\n\n";
        return {};
    }

    vector<double> result(3);

    result[0] = vet1[1]*vet2[2] - vet1[2]*vet2[1];
    result[1] = vet1[2]*vet2[0] - vet1[0]*vet2[2];
    result[2] = vet1[0]*vet2[1] - vet1[1]*vet2[0];
    
    return result;
}
#endif // PRODUTOVETORIAL_H_INCLUDED
