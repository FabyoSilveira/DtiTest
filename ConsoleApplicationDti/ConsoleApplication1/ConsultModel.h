#ifndef ConsultModel_H
#define ConsultModel_H
#include "Consult.h"
#include "ConsultDAO.h"
#include <list>
#include <string>

class ConsultModel {

public:

	ConsultModel();

	bool subscribeConsult(list<Consult>* consultList, Consult consultObject);

	bool verifyConsultConsistence(list<Consult>* consultList, Consult consultObject);

	string errorMessage;

private:

	ConsultDAO DAOobject;

};

#endif