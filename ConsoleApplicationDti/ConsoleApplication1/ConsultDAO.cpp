#include "ConsultDAO.h"

ConsultDAO::ConsultDAO() {

}

//Armazena a consulta no sistema
void ConsultDAO::subscribeConsult(list<Consult>* consultList, Consult consultObject) {

	consultList->push_back(consultObject);

}