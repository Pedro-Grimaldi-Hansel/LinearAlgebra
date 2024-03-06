#include <iostream>

#include "src/TransformacaoLinear.h"
#include "src/AdicaoDeVetores.h"
#include "src/MultiplicacaoPorEscalar.h"
#include "src/NormaEuclidiana.h"

using namespace std;

int main()
{
    cout << endl << "Dadas as opcoes:"<< endl; 
    cout << "0 - Sair" << endl;
    cout << "1 - Adicao de Vetores" << endl;
    cout << "2 - Multiplicacao de Vetor por Escalar" << endl;
    cout << "3 - Calculo da Norma Euclidiana" << endl;
    cout << "4 - Transformacao Linear de Vetores" << endl;
    cout << endl << "Escolha a operacao a ser realizada: ";
    int opcao;
    cin >> opcao;
    cout << endl;
    if (opcao < 0 || opcao > 4)
    {
        cout << "Opcao invalida! Insira a opcao novamente:";
        cin >> opcao;
        cout << endl;
    }
    switch (opcao)  
    {   
        case 0:
        {   
            cout << "Saindo do programa..."<< endl;
            return 0;

            break;
        }

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
            int dimensoes;
            cout << "De o numero de dimensoes do vetor: "<< endl;
            cin >> dimensoes;
            NormaEuclidiana normaEuclidiana(dimensoes);
            normaEuclidiana.calcularNorma();
            
            break;
        }

        case 4:
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
