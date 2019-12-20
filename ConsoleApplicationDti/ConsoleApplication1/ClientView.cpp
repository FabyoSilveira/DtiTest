#include "pch.h"
#include "ClientView.h"
#include "Client.h"
#include <iostream>
#include <conio.h>

using namespace std;

ClientView::ClientView() {


}

//Menu de cadastro de cliente
void ClientView::showClientRegisterMenu(list<Client>* clientList) {

	int userOption;

	do{

		cout << "Deseja prosseguir com o cadastro ou voltar ao menu principal? 1 - Prosseguir / 2 - Menu Principal" << endl;
		cin >> userOption;

		if (userOption != 1) {
			return;
		}

		cin.ignore();

		cout << "Nome : ";
		getline(cin, clientObject.name);

		cout << "Endereco : ";
		getline(cin, clientObject.address);

		cout << "Telefone : ";
		cin >> clientObject.phone;

		cout << "Email : ";
		cin >> clientObject.email;

		cin.ignore();

		cout << "Data de Nascimento : ";
		getline(cin, clientObject.birthDate);
		cout << endl;

	//Faz a chamada do fluxo de cadastro de cliente no sistema
	}while(!controllerObject.subscribeClient(clientList, clientObject));

	cout << "Cliente cadastrado com sucesso!" << endl;

}

//Exibe a lista de clientes, caso exista algum cadastrado
void ClientView::showClientList(list<Client> clientList) {

	list<Client>::iterator i;

	if(!clientList.empty()){

		cout << "*****           Lista de Clientes            *****" << endl;
		cout << "\n" << endl;

		for (i = clientList.begin(); i != clientList.end(); ++i) {

			cout << "  Nome - " << i->name << "                     " << endl;
			cout << "  Email - " << i->email << "                   " << endl;
			cout << "  Telefone - " << i->phone << "                " << endl;
			cout << "  Data de Nascimento - " << i->birthDate << "  " << endl;
			cout << "  Endereco - " << i->address << "              " << endl;
			cout << "  ------------------" << endl;
			cout << "\n" << endl;
		}

		cout << "**************************************************" << endl;
		cout << "\n" << endl;
		cout << "Aperte qualquer tecla para voltar ao menu principal..." << endl;
		_getch();

	}
	else {

		cout << "\n" << endl;
		cout << "Voce ainda nao possui nenhum cliente cadastrado." << endl;
		cout << "\n" << endl;
		cout << "Aperte qualquer tecla para voltar ao menu principal e cadastrar seu novo cliente..." << endl;
		_getch();

	}
	
	
}