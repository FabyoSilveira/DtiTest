#ifndef Consult_H
#define Consult_H
#include <string>

using namespace std;

class Consult {

public:

	Consult();
	Consult(string p_clientName, string p_date, string p_time, string p_weight, string p_bodyFat, string p_phisicState, string p_additionalInformation);

	string clientName;
	string date;
	string time;
	string weight;
	string bodyFat;
	string phisicState;
	string additionalInformation;

private:

};

#endif
