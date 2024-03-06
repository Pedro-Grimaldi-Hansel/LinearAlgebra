#include <iostream>

#include "src/TransformacaoLinear.h"
#include "src/AdicaoDeVetores.h"
#include "src/MultiplicacaoPorEscalar.h"

using namespace std;

int main()
{
    cout << endl << "Escolha a operacao a ser realizada: "<< endl; 
    cout << "1 - Adicao de Vetores" << endl;
    cout << "2 - Multiplicacao de Vetor por Escalar" << endl;
    cout << "3 - Transformacao Linear de Vetores" << endl << endl;
    int opcao;
    cin >> opcao;
    cout << endl;
    switch (opcao)  
    {   
        case 1:
        {   
            int dimensoes;
            cout << "De o numero de dimensoes dos vetores: "<< endl;
            cin >> dimensoes;
            AdicaoDeVetores adicaoDeVetores(dimensoes);
            adicaoDeVetores.adicionarVetores();
            break;
        }

        case 2:
        {
            int dimensoes;
            cout << "De o numero de dimensoes do vetor: "<< endl;
            cin >> dimensoes;
            MultiplicacaoPorEscalar multiplicacaoPorEscalar(dimensoes);
            multiplicacaoPorEscalar.multiplicarPorEscalar();

            break;
        }

        case 3:
        {
            float a, b, c, d, x, y;

            cout << "De os valores do vetor de entrada: "<< endl;
            cin >> x >> y;

            cout << "Digite os valores da matriz 2x2 (a b c d): "<< endl;
            cin >> a >> b >> c >> d;

            TransformacaoLinear transformacaoLinear(a,b,c,d);
            transformacaoLinear.aplicarTransformacaoLinear(x, y);
            transformacaoLinear.imprimirResultado();            
            break;
        }
        default:
            break;
        }
    return 0;

}
