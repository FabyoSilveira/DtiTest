#include "ConsultView.h"
#include "Consult.h"
#include "Client.h"
#include <iostream>
#include <list>
#include <conio.h>

using namespace std;

ConsultView::ConsultView(){

}

//Menu de cadastro de consulta
void ConsultView::showConsultRegisterMenu(list<Consult>* consultList, list<Client> clientList) {

	int userOption;

	do {

		cout << "Deseja prosseguir com o cadastro ou voltar ao menu principal? 1 - Prosseguir / 2 - Menu Principal" << endl;
		cin >> userOption;

		if (userOption != 1) {
			return;
		}

		cin.ignore();

		cout << "Nome do Cliente : ";
		getline(cin, consultObject.clientName);

		cout << "Data : ";
		getline(cin, consultObject.date);

		cout << "Hora : ";
		getline(cin, consultObject.time);

		cout << "Peso : ";
		cin >> consultObject.weight;

		cout << "Porcentagem Gordura : ";
		cin >> consultObject.bodyFat;

		cin.ignore();

		cout << "Estado Fisico : ";
		getline(cin, consultObject.phisicState);

		cout << "Informacoes Adicionais : ";
		getline(cin, consultObject.additionalInformation);
		cout << endl;

	//Faz a chamada do fluxo de cadastro de consulta
	} while (!controllerObject.subscribeConsult(consultList, consultObject, clientList));

	cout << "Consulta cadastrado com sucesso!" << endl;

}

//Listagem de consultas cadastradas
void ConsultView::showConsultList(list<Consult> consultList) {

	list<Consult>::iterator i;

	if(!consultList.empty()){

		cout << "***************                          Lista de Consultas                           ***************" << endl;
		cout << "\n" << endl;

		for (i = consultList.begin(); i != consultList.end(); ++i) {

			cout << "  Nome do Cliente - " << i->clientName << "                     " << endl;
			cout << "  Data - " << i->date << "                     " << endl;
			cout << "  Hora - " << i->time << "                   " << endl;
			cout << "  Peso - " << i->weight << "                " << endl;
			cout << "  Porcentagem de Gordura - " << i->bodyFat << "  " << endl;
			cout << "  Estado Fisico - " << i->phisicState << "              " << endl;
			cout << "  Informacoes Adicionais - " << i->additionalInformation << "              " << endl;
			cout << "  ------------------" << endl;
			cout << "\n" << endl;
		}

		cout << "*****************************************************************************************************" << endl;
		cout << "\n" << endl;
		cout << "Aperte qualquer tecla para voltar ao menu principal..." << endl;
		_getch();

	}
	else {

		cout << "\n" << endl;
		cout << "Voce ainda nao possui nenhuma consulta cadastrada." << endl;
		cout << "\n" << endl;
		cout << "Aperte qualquer tecla para voltar ao menu principal e cadastrar sua nova consulta..." << endl;
		_getch();

	}
	

}