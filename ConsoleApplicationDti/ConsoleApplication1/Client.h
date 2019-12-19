#ifndef Client_H
#define Client_H
#include <string>

using namespace std;

class Client {

public:

	Client();
	Client(string p_name, string p_address, string p_phone, string p_email, string p_birthDate);

	string name;
	string address;
	string phone;
	string email;
	string birthDate;

private:

};

#endif