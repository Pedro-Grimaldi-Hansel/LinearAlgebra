#include <iostream>

#include "src/TransformacaoLinear.h"
#include "src/AdicaoDeVetores.h"
#include "src/MultiplicacaoPorEscalar.h"
#include "src/NormaEuclidiana.h"
#include "src/Normalizacao.h"

using namespace std;

int main()
{
    cout << endl << "Dadas as opcoes:"<< endl; 
    cout << "0 - Sair" << endl;
    cout << "1 - Adicao de Vetores" << endl;
    cout << "2 - Multiplicacao de Vetor por Escalar" << endl;
    cout << "3 - Calculo da Norma Euclidiana" << endl;
    cout << "4 - Normalizacao de Vetor" << endl;
    cout << "5 - Transformacao Linear de Vetores" << endl;
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
            AdicaoDeVetores adicaoDeVetores;
            adicaoDeVetores.adicionarVetores();

            break;
        }

        case 2:
        {            
            MultiplicacaoPorEscalar multiplicacaoPorEscalar;
            multiplicacaoPorEscalar.multiplicarPorEscalar();

            break;
        }

        case 3:
        {
            NormaEuclidiana normaEuclidiana;
            normaEuclidiana.calcularNorma();
            break;
        }

        case 4:
        {
            
            

            break;
        }

        case 5:
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
