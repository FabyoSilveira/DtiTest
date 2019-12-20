#include "ClientController.h"
#include <iostream>

using namespace std;

//Faz a chamada da classe de validacao de dados para cadastro do cliente
bool ClientController::subscribeClient(list<Client>* clientList, Client clientObject) {	

	return modelObject.subscribeClient(clientList, clientObject);

}