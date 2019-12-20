#include "ConsultController.h"
#include <iostream>

using namespace std;

//Faz a chamada da classe de validação do cadastro de consulta
bool ConsultController::subscribeConsult(list<Consult>* consultList, Consult consultObject, list<Client> clientList) {

	return modelObject.subscribeConsult(consultList, consultObject, clientList);

}