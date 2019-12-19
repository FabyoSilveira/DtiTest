#include "ConsultDAO.h"

ConsultDAO::ConsultDAO() {

}

void ConsultDAO::subscribeConsult(list<Consult>* consultList, Consult consultObject) {

	consultList->push_back(consultObject);

}