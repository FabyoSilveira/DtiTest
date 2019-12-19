#include "pch.h"
#include "ProgramBuilder.h"
#include <iostream>
#include <list>

using namespace std;

ProgramBuilder::ProgramBuilder() {

};

void ProgramBuilder::startProgram() {

	do{
		
		cout << "\n" << endl;
		cout << "*****           Consultorio Nutricionista            *****" << endl;
		cout << "*  Digite o numero da operacao que voce deseja realizar  *" << endl;
		cout << "*  1 - Cadastrar Cliente                                 *" << endl;
		cout << "*  2 - Cadastrar Consulta                                *" << endl;
		cout << "*  3 - Mostrar Clientes                                  *" << endl;
		cout << "*  4 - Mostrar Consultas                                 *" << endl;
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
			break;
		case 2:
			consultInterface.showConsultRegisterMenu(&consultList);
			break;
		case 3:
			clientInterface.showClientList(clientList);
			break;
		case 4:
			consultInterface.showConsultList(consultList);
			break;
		}

	}
	else {
		return;
	}
	
};