#include "pch.h"
#include "ProgramBuilder.h"
#include "ClientView.h"
#include "Client.h"
#include <iostream>
#include <list>

using namespace std;

ProgramBuilder::ProgramBuilder() {

};

void ProgramBuilder::startProgram() {

	do{
	
		cout << "*****           Consultorio Nutricionista            *****" << endl;
		cout << "*  Digite o numero da operacao que voce deseja realizar  *" << endl;
		cout << "*  1 - Cadastrar Cliente                                 *" << endl;
		cout << "*  2 - Cadastrar Consulta                                *" << endl;
		cout << "*  3 - Mostrar Consultas                                 *" << endl;
		cout << "*  4 - Mostrar Clientes                                  *" << endl;
		cout << "*  0 - Sair                                              *" << endl;
		cout << "**********************************************************" << endl;

		cin >> userOption;

		userOptionHandler(userOption);

	}while(userOption != 0);

};

void ProgramBuilder::userOptionHandler(int userOption) {
	
	if(userOption != 0){
		switch(userOption){

		case 1:

			clientInterface.showClientRegisterMenu(&clientList);

		case 2:

		case 3:

		case 4:

		}

	}
	else
		return;

};