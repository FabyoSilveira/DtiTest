#include "ConsultController.h"
#include <iostream>

using namespace std;

bool ConsultController::subscribeConsult(list<Consult>* consultList, Consult consultObject) {

	return modelObject.subscribeConsult(consultList, consultObject);

}