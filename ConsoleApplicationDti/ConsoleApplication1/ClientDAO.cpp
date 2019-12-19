#include "ClientDAO.h"

ClientDAO::ClientDAO() {

}

void ClientDAO::subscribeClient(list<Client>* clientList, Client clientObject){

	clientList->push_back(clientObject);

}