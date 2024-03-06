#include <iostream>

#include "src/TransformacaoLinear.h"
#include "src/AdicaoDeVetores.h"

using namespace std;

int main()
{
    cout << endl << "Escolha a operacao a ser realizada: "<< endl; 
    cout << "1 - Adicao de Vetores" << endl;
    cout << "2 - Multiplicacoo de Vetores por Escalar" << endl;
    cout << "3 - Transformacao Linear de Vetores" << endl << endl;
    int opcao;
    cin >> opcao;
    cout << endl;
    switch (opcao)  
    {   
        case 1:
        {   
            int dimensoes;
            cout << "De o numero de dimensoes do vetor: "<< endl;
            cin >> dimensoes;
            /*while (cin.fail())
            {
                cout << "Entrada inválida. Por favor, digite um número inteiro: ";
                cin.clear(); // Limpa o estado de erro do cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada anterior
                cin >> dimensoes; // Tenta obter a entrada novamente
            }*/

            AdicaoDeVetores adicaoDeVetores(dimensoes);
            adicaoDeVetores.adicionarVetores();

            /*int opcao2;
            cout << "De o numero de dimensoes do vetor (2 ou 3): "<< endl;
            cin >> opcao2;
            cout << endl;
            
            while(opcao2 != 2 && opcao2 != 3) 
            {
                cout << "Opção invalida, de o numero de dimensoes do vetor (2 ou 3): "<< endl;
                cin >> opcao2;
                cout << endl;
            }
            switch (opcao2)  
            {
                case 2:
                {
                    float x1, y1, x2, y2;
                    cout << endl << "De os valores x e y do primeiro vetor: "<< endl;
                    cin >> x1 >> y1;
                    cout << endl << "De os valores x e y do segundo vetor: "<< endl;
                    cin >> x2 >> y2;
                    AdicaoDeVetores adicaoDeVetores;
                    adicaoDeVetores.adicionarVetores2D(x1, y1, x2, y2);
                    break;
                }
                case 3:
                {   
                    float x1, x2, x3, y1, y2, y3;
                    cout << endl << "De os (3 ou 3): "<< endl;
                    
                    break;
                }
                default:
                break;
            }    
            */
        }

        case 2:
        {

         
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
