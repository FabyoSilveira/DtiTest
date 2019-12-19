#ifndef Client_H
#define Client_H

using namespace std;

class Client {

public:

	Client(string name, string address, long phone, string email, string birthDate);

	string name;
	string address;
	long phone;
	string email;
	string birthDate;

private:

};

#endif