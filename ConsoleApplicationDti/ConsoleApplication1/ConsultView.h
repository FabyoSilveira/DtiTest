#ifndef ConsultView_H
#define ConsultView_H
#include "Consult.h"
#include "ConsultController.h"

class ConsultView {

public:

	ConsultView();

	void showConsultRegisterMenu(list<Consult>* consultList);
	void showConsultList(list<Consult> consultList);

private:

	ConsultController controllerObject;
	Consult consultObject;

};

#endif
