#ifndef ConsultDAO_H
#define ConsultDAO_H
#include "Consult.h"
#include <list>


class ConsultDAO {

public:

	ConsultDAO();

	void subscribeConsult(list<Consult>* consultList, Consult consultObject);

private:

};


#endif
