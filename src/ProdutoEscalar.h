#ifndef PRODUTOESCALAR_H_INCLUDED
#define PRODUTOESCALAR_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

class ProdutoEscalar
{
public:
    static double produtoEscalar(vector<double>, vector<double>);
};

inline double ProdutoEscalar::produtoEscalar(vector<double> vet1, vector<double> vet2){
    if(vet1.size() != vet2.size() ) {
        cout << "\nErro: Vetores de diferentes dimensoes. A operacao de adicao nao pode ser realizada.\n\n";
        return {};
    }

    double result = 0.0;
    for (int i = 0; i < vet1.size(); i++) {
        result += vet1[i] * vet2[i];
    }
    return result;
}
#endif // PRODUTOESCALAR_H_INCLUDED
