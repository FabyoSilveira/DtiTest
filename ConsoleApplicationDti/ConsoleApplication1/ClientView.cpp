#include "pch.h"
#include "ClientView.h"
#include "Client.h"
#include <iostream>
#include <conio.h>

using namespace std;

ClientView::ClientView() {


}

void ClientView::showClientRegisterMenu(list<Client>* clientList) {

	do{

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

	}while(!controllerObject.subscribeClient(clientList, clientObject));

	cout << "Cliente cadastrado com sucesso!" << endl;

}

void ClientView::showClientList(list<Client> clientList) {

	list<Client>::iterator i;

	cout << "*****           Lista de Clientes            *****" << endl;
	cout << "\n" << endl;

	for(i = clientList.begin(); i != clientList.end(); ++i){
		
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