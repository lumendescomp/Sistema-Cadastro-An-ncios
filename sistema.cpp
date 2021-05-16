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
    float investimento_dia;
};

ostream &operator<<(ostream &os, const ANUNCIO &a)
{
    os << "Valor total investido: " << vti(a) << endl;
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
            cout << "Digite o investimento por dia:" << endl;
            cin >> anuncio.investimento_dia;
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
//Não consegui realizar as funções por conta da falta do intervalo de tempo, que eu não soube programar.
int vti(a)
{
    return (duranção do anúncio * investimento_dia)
}

int qmviews(ANUNCIO a)
{
    int visualizacao_original_pessoas = valor_total_investido * 30;
    float compartilhamentos = visualizacao_original_pessoas * 0.018;
    float novas_visualizacoes;
    float view_totais;

    for (int i = 0; i < 4; i++)
    {

        novas_visualizacoes = compartilhamentos * 40;

        compartilhamentos = novas_visualizacoes * 0.018;

        view_totais += novas_visualizacoes;
    }
    return (int(view_totais + visualizacao_original_pessoas));
}

int qmclick(ANUNCIO a)
{
    return int((quantidade total de views * 0.12));
}

int qmcomp(ANUNCIO a)
{
    return (int(quantidade total de views * 0.018));
}
