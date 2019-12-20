#include "ConsultModel.h"
#include <iostream>

using namespace std;

ConsultModel::ConsultModel() {


}

//Valida a consulta a ser cadastrada e faz a chamada de dados para armazena-la no sistema
bool ConsultModel::subscribeConsult(list<Consult>* consultList, Consult consultObject, list<Client> clientList) {

	if (verifyConsultConsistence(*consultList, consultObject, clientList)) {

		DAOobject.subscribeConsult(consultList, consultObject);

	}
	else {

		cout << errorMessage << endl;
		cout << "\n" << endl;
		return false;
	}

	return true;
}

//Verifica a consistencia dos dados a serem cadastrados
bool ConsultModel::verifyConsultConsistence(list<Consult> consultList, Consult consultObject, list<Client> clientList) {

	list<Client>::iterator i;
	int userOption;

	//Verifica se o cliente da consulta existe
	for (i = clientList.begin(); i != clientList.end(); ++i) {

		if (i->name == consultObject.clientName) {

			return true;

		}

	}

	errorMessage = "O cliente da consulta nao existe no sistema. Tente novamente com um cliente valido!";
	return false;

}