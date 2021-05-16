/*2ª Parte - Considere os seguintes critérios fictícios para desenvolver o cadastro de anúncios:
 Crie um sistema que permita o cadastro de anúncios. O anúncio deverá conter os seguintes dados:
nome do anúncio
cliente
data de início
data de término
investimento total
O sistema fornecerá os relatórios de cada anúncio contendo:
valor total investido
quantidade máxima de visualizações
quantidade máxima de cliques
quantidade máxima de compartilhamentos
Os relatórios poderão ser filtrados por intervalo de tempo e cliente.*/

#include <iostream>
#include <vector>
using namespace std;

class ANUNCIO
{
public:
    string nome_anuncio, nome_cliente, data_inicio, data_fim;
    float investimento_total;
};

ostream &operator<<(ostream &os, const ANUNCIO &a)
{
    os << "Valor total investido: " << a.investimento_total << endl;
    os << "Quantidade máxima de visualizações: " << qmviews(a) << endl;
    os << "Quantidade máxima de cliques: " << qmclick(a) << endl;
    os << "Quantidade máxima de compartilhamentos: " << qmcomp(a);
    return os;
}

int main()
{
    while (true)
    {
        cout << "Para cadastrar um anúncio, digite 1\n";
        cout << "Para fazer uma consulta de anuncios por cliente, digite 2\n";
        cout << "Para fazer uma consulta de anuncios por intervalo de tempo, digite 3\n";
        cout << "Para consultar todos os anúncios, digite 4\n";
        cout << "Para sair, digite 5\n";
        int escolha_usuario;
        cin >> escolha_usuario;
        vector<ANUNCIO> anuncios;
        switch (escolha_usuario)
        {
        case 1:
        {
            ANUNCIO anuncio;
            cout << "Digite o nome do anúncio:" << endl;
            cin >> anuncio.nome_anuncio;
            cout << "Digite o nome do cliente:" << endl;
            cin >> anuncio.nome_cliente;
            cout << "Digite a data de início do anúncio:" << endl;
            cin >> anuncio.data_inicio;
            cout << "Digite a data de término do anúncio:" << endl;
            cout << anuncio.data_fim;
            cout << "Digite o investimento total:" << endl;
            cin >> anuncio.investimento_total;
            anuncios.push_back(anuncio);
            break;
        }
        case 2:
        {
            string nome_cliente;
            cout << "Digite o nome do cliente:" << endl;
            cin >> nome_cliente;
            for (ANUNCIO a : anuncios)
            {
                if (a.nome_cliente == nome_cliente)
                {
                    cout << a << endl;
                }
            }
            break;
        }

        case 3:
        {
            string data_inicio, data_termino;
            cout << "Digite a data de início do anúncio: " << endl;
            cin >> data_inicio;
            cout << "Digite a data de término do anúncio: " << endl;
            cin >> data_termino;
            break;
        }

        case 4:
            for (ANUNCIO a : anuncios)
            {
                cout << a << endl;
            }
            break;

        case 5:
            return;
        }
    }
    return 0;
}

int qmviews(ANUNCIO a)
{
    views_iniciais = a.investimento_total * 30;
}

int qmclick(ANUNCIO a)
{
    return (a.investimento_total * 30;
}

int qmcomp(ANUNCIO a)
{
}
