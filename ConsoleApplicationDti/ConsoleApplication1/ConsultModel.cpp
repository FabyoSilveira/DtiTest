#include "ConsultModel.h"
#include <iostream>

using namespace std;

ConsultModel::ConsultModel() {


}

bool ConsultModel::subscribeConsult(list<Consult>* consultList, Consult consultObject) {

	if (verifyConsultConsistence(consultList, consultObject)) {

		DAOobject.subscribeConsult(consultList, consultObject);

	}
	else {

		cout << errorMessage << endl;
		return false;
	}

	return true;
}

bool ConsultModel::verifyConsultConsistence(list<Consult>* consultList, Consult consultObject) {


	return true;
}