#include "ClientDAO.h"

ClientDAO::ClientDAO() {

}

//Armazena o cliente no sistema
void ClientDAO::subscribeClient(list<Client>* clientList, Client clientObject){

	clientList->push_back(clientObject);

}