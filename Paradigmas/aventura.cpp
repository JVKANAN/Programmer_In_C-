#include <iostream>
#include <string>

using std:: cout;
using std:: cin;
using std:: endl;
using std:: string;

int main()
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	cout <<"Bem-Vindo a Fortuna Perdida\n\n";
	cout <<"Por favor, informe o seguinte para a sua aventura personalizada\n";

	cout <<"Digite um Número: ";
	cin >> adventurers;

	cout<< "Digite outro Número, menor que o primeiro: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Digite seu Sobrenome: ";
	cin >> leader;

	cout << "\nUm grupo corajoso de " << adventurers << " sairam em uma jornada ";
	cout << "-- em busca do tesouro perdido dos Antigos Anões. "; 
	cout << "O grupo era liderado pelo famoso ladino, " << leader << ".\n" ; 

	cout << "\nDUrante o trajeto, um bando de Ogros Saqueadores emboscaram o grupo. ";
	cout << "Todos lutaram bravamente sob o comando de " << leader;
	cout << ", e os ogros foram derrotados, mas a um custo. ";
	cout << "Dos aventureiros, " << killed << " foram derrorados, ";
	cout << "deixando apenas " << survivors << " no grupo.\n";

	cout << "\nO bando estava preste a abandonar todas as esperanças. ";
	cout << "Mas enquanto escavam os túmulos para os amigos, ";
	cout << "eles encontraram um tesouro enterrado. ";
	cout << "Então os aventureiro diviriram " << GOLD_PIECES << " moedas de ouro. ";
	cout << leader << " ficou com a sobra de " << (GOLD_PIECES / survivors);
	cout << " moedas para manter tudo justo.\n";

	return 0;
}