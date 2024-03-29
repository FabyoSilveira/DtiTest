#ifndef ConsultController_H
#define ConsultController_H
#include "Consult.h"
#include "ConsultModel.h"
#include <list>

class ConsultController {

public:

	bool subscribeConsult(list<Consult>* consultList, Consult consultObject, list<Client> clientList);

private:

	ConsultModel modelObject;

};

#endif