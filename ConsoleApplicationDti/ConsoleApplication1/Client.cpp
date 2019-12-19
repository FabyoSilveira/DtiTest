#include "pch.h"
#include "Client.h"
#include <iostream>
#include <string>

using namespace std;

Client::Client() {

	name = "";
	address = "";
	phone = "";
	email = "";
	birthDate = "";

}

Client::Client(string p_name, string p_address, string p_phone, string p_email, string p_birthDate) {

	name = p_name;
	address = p_address;
	phone = p_phone;
	email = p_email;
	birthDate = p_birthDate;

}