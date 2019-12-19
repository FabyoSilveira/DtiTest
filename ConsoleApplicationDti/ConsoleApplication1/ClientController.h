#ifndef ClientController_H
#define ClientController_H
#include "Client.h"
#include "ClientModel.h"
#include <list>


class ClientController {

public:

	bool subscribeClient(list<Client>* clientList, Client clientObject);

private:

	ClientModel modelObject;

};

#endif