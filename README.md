# Sistema-Cadastro-Anuncios

O código inicia com uma interação com o usuário em forma de menu onde ele deve escolher se quer cadastrar um anúncio, buscar por um anúncio filtrando-os por meio do nome do cliente, buscar por um anúncio filtrando-os por meio do intervalo de tempo, mostrar todos os anúncios existentes, ou sair do menu. Os valores respectivos para cada uma das ações é 1, 2, 3, 4 e 5. Caso um desses valores seja inserido e enviado, entraremos em um switch (uma estrtura condicional). No caso do valor = 1, será pedido para o usuário todos os dados referentes ao anúncio: Nome do cliente, nome do anúncio, data de início, data de término e investimento por dia. Eles serão armazenados em um array de anuncios definidos pela classe ANUNCIOS. Caso o valor = 2, será pedido ao usuário o filtro de nome que ele deseja usar, depois ocorrerá uma iteração pelo array procurando por nomes iguais ao solicitado, caso seja encontrado, os dados referentes ao relatório serão exibidos. Caso valor = 3, não consegui realizar o procedimento. Caso valor = 4, serão exibidos todos os anúncios cadastrados. E caso valor = 5, a operação dentro do menu finalizará. 

Dentro do código existe essa função:
ostream &operator<<(ostream &os, const ANUNCIO &a)
{
    os << "Valor total investido: " << a.investimento_total << endl;
    os << "Quantidade máxima de visualizações: " << qmviews(a) << endl;
    os << "Quantidade máxima de cliques: " << qmclick(a) << endl;
    os << "Quantidade máxima de compartilhamentos: " << qmcomp(a);
    return os;
}
Ela serve para alterar o operador "<<" para que seja dado um output configurado pelo programador quando for solicitada a exibição de anúncios.  

Os dados referentes ao anúncio são obtido através das funções:
vti = valor total investido.
qmviews = quantidade máxima de visualizaões.
qmclick = quantidade máxima de cliques.
qmcomp = quantidade máxima de compartilhamentos.
