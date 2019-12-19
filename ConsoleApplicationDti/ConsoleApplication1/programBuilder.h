#ifndef ProgramBuilder_H
#define ProgramBuilder_H
#include "ClientView.h"
#include "Client.h"
#include "ConsultView.h"
#include "Consult.h"
#include <list>

class ProgramBuilder {

public:

	ProgramBuilder();

	void startProgram();

	void userOptionHandler(int userOption);


	ConsultView consultInterface;
	list<Consult> consultList;

	ClientView clientInterface;
	list<Client> clientList;

private:

	int userOption;

};
#endif