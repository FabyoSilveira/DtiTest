#ifndef ClientDAO_H
#define ClientDAO_H
#include "Client.h"
#include <list>


class ClientDAO {

public:

	ClientDAO();

	void subscribeClient(list<Client>* clientList, Client clientObject);

private:

};


#endif
