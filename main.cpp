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
    cout << "5 - Produto Escalar" << endl;
    cout << "6 - Produto Vetorial" << endl;
    cout << "7 - Transformacao Linear de Vetores" << endl;
    cout << endl << "Escolha a operacao a ser realizada: ";
    int opcao;
    cin >> opcao;
    cout << endl;

    while (opcao < 0 || opcao > 9)
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
        }

        case 1:
        {   
            vector<double> vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z,...): ");
            vector<double> vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z,...): ");
            vector<double> result;

            if(vet1.size() != vet2.size() ) {
                cout << "\nErro: Vetores de diferentes dimensoes. A operacao de adicao nao pode ser realizada adicione novamente os vetores.\n\n";
                vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z,...): ");
                vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z,...): ");
            }
            
            AdicaoDeVetores adicaoDeVetores;
            result = adicaoDeVetores.adicionarVetores(vet1, vet2);
            cout << "\nResultado da soma: ";
            LeitorDeVetores::printVector(result);
            cout << endl;

            break;
        }

        case 2:
        {   
            vector<double> vet = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z,...): ");
            double escalar;
            cout << "Digite o escalar: ";
            cin >> escalar;
            vector<double> result;

            MultiplicacaoPorEscalar multiplicacaoPorEscalar;
            result = multiplicacaoPorEscalar.multiplicarPorEscalar(vet, escalar);
            cout << "\nResultado da multiplicacao: ";
            LeitorDeVetores::printVector(result);
            cout << endl;

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
            Normalizacao normalizacao;
            normalizacao.normalizarVetor();
            break;
        }

        case 5:
        {

            break;
        }

        case 6:
        {

            break;
        }

        case 7:
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
            break;
        }

        default:
            break;
        }
    return 0;

}
