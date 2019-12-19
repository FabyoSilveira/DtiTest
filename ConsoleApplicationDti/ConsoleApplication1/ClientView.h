#ifndef ClientView_H
#define ClientView_H
#include "Client.h"
#include "ClientController.h"
#include <list>

using namespace std;

class ClientView {

public:

	ClientView();

	void showClientRegisterMenu(list<Client>* clientList);
	void showClientList(list<Client> clientList);

private:

	ClientController controllerObject;
	Client clientObject;

};

#endif