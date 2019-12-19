#ifndef ClientModel_H
#define ClientModel_H
#include "Client.h"
#include "ClientDAO.h"
#include <list>
#include <string>

class ClientModel {

public:

	ClientModel();

	bool subscribeClient(list<Client>* clientList, Client clientObject);

	bool verifyClientConsistence(list<Client>* clientList, Client clientObject);

	string errorMessage;

private:

	ClientDAO DAOobject;

};

#endif
