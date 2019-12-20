#include "ClientModel.h"
#include <iostream>

using namespace std;

ClientModel::ClientModel() {


}

//Valida o cliente a ser cadastrado e faz a chamada da classe de dados para armazena-lo no sistema
bool ClientModel::subscribeClient(list<Client>* clientList, Client clientObject) {	

	//Valida a consistencia do cliente e chama a classe de dados para armazena-lo no sistema
	if(verifyClientConsistence(*clientList, clientObject)){

		DAOobject.subscribeClient(clientList, clientObject);
		return true;
	}
	else{

		cout << errorMessage << endl;
		cout << "\n" << endl;
		return false;
	}
}

//Verifica a consistencia dos dados a serem cadastrados
bool ClientModel::verifyClientConsistence(list<Client> clientList, Client clientObject) {

	list<Client>::iterator i;

	//Verifica unicidade do cliente no sistema
	for (i = clientList.begin(); i != clientList.end(); ++i) {
	
		if (i->name == clientObject.name) {

			errorMessage = "Ja existe um cliente com esse nome, cadastrado no sistema. Tente novamente!";
			return false;

		}

	}

	return true;
}