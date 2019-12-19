#include "ClientController.h"
#include <iostream>

using namespace std;

bool ClientController::subscribeClient(list<Client>* clientList, Client clientObject) {	

	return modelObject.subscribeClient(clientList, clientObject);

}