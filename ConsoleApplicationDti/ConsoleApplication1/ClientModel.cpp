#include "ClientModel.h"
#include <iostream>

using namespace std;

ClientModel::ClientModel() {


}

bool ClientModel::subscribeClient(list<Client>* clientList, Client clientObject) {	

	if(verifyClientConsistence(clientList, clientObject)){

		DAOobject.subscribeClient(clientList, clientObject);

	}
	else{

		cout << errorMessage << endl;
		return false;
	}

	return true;
}

bool ClientModel::verifyClientConsistence(list<Client>* clientList, Client clientObject) {


	return true;
}