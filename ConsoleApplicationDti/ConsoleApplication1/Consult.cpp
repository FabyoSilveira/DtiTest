#include "Consult.h"
#include <iostream>

using namespace std;

Consult::Consult() {


}

Consult::Consult(string p_date, string p_time, string p_weight, string p_bodyFat, string p_phisicState, string p_additionalInformation) {

	date = p_date;
	time = p_time;
	weight = p_weight;
	bodyFat = p_bodyFat;
	phisicState = p_phisicState;
	additionalInformation = p_additionalInformation;

}