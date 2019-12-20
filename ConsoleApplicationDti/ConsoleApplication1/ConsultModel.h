#ifndef ConsultModel_H
#define ConsultModel_H
#include "Consult.h"
#include "ConsultDAO.h"
#include "Client.h"
#include <list>
#include <string>

class ConsultModel {

public:

	ConsultModel();

	bool subscribeConsult(list<Consult>* consultList, Consult consultObject, list<Client> clientList);

	bool verifyConsultConsistence(list<Consult> consultList, Consult consultObject, list<Client> clientList);

	string errorMessage;

private:

	ConsultDAO DAOobject;

};

#endif