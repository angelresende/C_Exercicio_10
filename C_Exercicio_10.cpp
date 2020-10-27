#include <iostream>
#include <clocale> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <cmath> // Retorna valor tipo double


using namespace std;

struct Veiculo {
	string Modelo_do_Veiculo;
	int Ano_de_Fabricacao;
	float Quilometragem;
	float Valor_de_Venda;
};

void InserirDados(Veiculo* ptrVeiculo);
void ImprimirDados(Veiculo* ptrVeiculo);
void InserirNovosDados(Veiculo* ptrVeiculo);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	Veiculo *pVeiculo;
	pVeiculo = new Veiculo;

	InserirDados(pVeiculo);
	InserirNovosDados(pVeiculo);
	ImprimirDados(pVeiculo);
	delete pVeiculo;

	system("pause");
	return 0;
}

void InserirDados(Veiculo *ptrVeiculo) {
	cout << "Informe o modelo do veículo: ";
	getline(cin, ptrVeiculo->Modelo_do_Veiculo);

	cout << "Informe o ano de fabricação do veículo: ";
	cin >> ptrVeiculo->Ano_de_Fabricacao;

	cout << "Informe a quilometragem do veículo: ";
	cin >> ptrVeiculo->Quilometragem;

	cout << "Informe o valor de venda do veículo: ";
	cin >> ptrVeiculo->Valor_de_Venda;
	cout << endl << endl;
}

void InserirNovosDados(Veiculo* ptrVeiculo) {
	cout << "Informe a quilometragem do veículo: ";
	cin >> ptrVeiculo->Quilometragem;

	cout << "Informe o valor de venda do veículo: ";
	cin >> ptrVeiculo->Valor_de_Venda;
	cout << endl << endl;
}

void ImprimirDados(Veiculo* ptrVeiculo) {
	cout << "Modelo do veículo: " << ptrVeiculo->Modelo_do_Veiculo << endl;
	cout << "Ano de fabricação do veículo: " << ptrVeiculo->Ano_de_Fabricacao << endl;
	cout << "Quilometragem do veículo: " << ptrVeiculo->Quilometragem << endl;
	cout << "Valor de venda do veículo: " << ptrVeiculo->Valor_de_Venda << endl;
	cout << endl << endl;
}