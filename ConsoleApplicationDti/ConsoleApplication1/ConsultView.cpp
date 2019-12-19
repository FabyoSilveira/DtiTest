#include "ConsultView.h"
#include "Consult.h"
#include <iostream>
#include <list>
#include <conio.h>

using namespace std;

ConsultView::ConsultView(){

}

void ConsultView::showConsultRegisterMenu(list<Consult>* consultList) {

	do {

		cin.ignore();

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

	} while (!controllerObject.subscribeConsult(consultList, consultObject));

	cout << "Consulta cadastrado com sucesso!" << endl;

}

void ConsultView::showConsultList(list<Consult> clientList) {

	list<Consult>::iterator i;

	cout << "***************                          Lista de Consultas                           ***************" << endl;
	cout << "\n" << endl;
	
	for (i = clientList.begin(); i != clientList.end(); ++i) {

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