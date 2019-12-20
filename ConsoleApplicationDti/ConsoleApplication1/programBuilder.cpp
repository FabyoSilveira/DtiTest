#include "pch.h"
#include "ProgramBuilder.h"
#include "NutrientProviders.h"
#include <iostream>
#include <list>

using namespace std;

ProgramBuilder::ProgramBuilder() {

};

//Menu principal com todas as opcoes do usuario
void ProgramBuilder::startProgram() {

	setDefaultNutrientProviders();

	do{
		
		cout << "\n" << endl;
		cout << "*****           Consultorio Nutricionista            *****" << endl;
		cout << "*  Digite o numero da operacao que voce deseja realizar  *" << endl;
		cout << "*  1 - Cadastrar Cliente                                 *" << endl;
		cout << "*  2 - Cadastrar Consulta                                *" << endl;
		cout << "*  3 - Cadastrar Alimento Energetico                     *" << endl;
		cout << "*  4 - Cadastrar Alimento Construtor                     *" << endl;
		cout << "*  5 - Cadastrar Alimento Restaurador                    *" << endl;
		cout << "*  6 - Mostrar Alimentos			         *" << endl;
		cout << "*  7 - Mostrar Clientes                                  *" << endl;
		cout << "*  8 - Mostrar Consultas                                 *" << endl;
		cout << "*  9 - Receber recomendacao alimentar                    *" << endl;
		cout << "*  0 - Sair                                              *" << endl;
		cout << "**********************************************************" << endl;

		cin >> userOption;

		userOptionHandler(userOption);

	}while(userOption != 0);

};

//Gerencia a opcao do usuario e direciona para o fluxo correspondente
void ProgramBuilder::userOptionHandler(int userOption) {
	
	if(userOption != 0){

		switch(userOption){

		case 1:
			clientInterface.showClientRegisterMenu(&clientList);
			break;
		case 2:
			consultInterface.showConsultRegisterMenu(&consultList, clientList);
			break;
		case 3:
			nutrientProvidersInterface.showNutrientProvidersRegisterMenu(&energeticNutrientProviderList, "Energertico");
			break;
		case 4:
			nutrientProvidersInterface.showNutrientProvidersRegisterMenu(&constructorNutrientProviderList, "Construtor");
			break;
		case 5:
			nutrientProvidersInterface.showNutrientProvidersRegisterMenu(&restorerNutrientProviderList, "Restaurador");
			break;
		case 6:
			nutrientProvidersInterface.showNutrientProvidersList(energeticNutrientProviderList, constructorNutrientProviderList, restorerNutrientProviderList);
			break;
		case 7:
			clientInterface.showClientList(clientList);
			break;
		case 8:
			consultInterface.showConsultList(consultList);
			break;
		case 9:
			"Not implemented yet!...";
			break;
		}

	}
	else {
		return;
	}
	
};

//Constroi uma cadeia de 3 alimentos de cada grupo
void ProgramBuilder::setDefaultNutrientProviders() {

	
	NutrientProviders* auxObject = new NutrientProviders("Pao", "Energetico", 120.00);
	energeticNutrientProviderList.push_back(*auxObject);

	auxObject = new NutrientProviders("Arroz", "Energetico", 200.00);
	energeticNutrientProviderList.push_back(*auxObject);

	auxObject = new NutrientProviders("Pizza", "Energetico", 400.00);
	energeticNutrientProviderList.push_back(*auxObject);

	auxObject = new NutrientProviders("Frango", "Construtor", 350.00);
	constructorNutrientProviderList.push_back(*auxObject);

	auxObject = new NutrientProviders("Carne Vermelha", "Construtor", 400.00);
	constructorNutrientProviderList.push_back(*auxObject);

	auxObject = new NutrientProviders("Ovo", "Construtor", 100.00);
	constructorNutrientProviderList.push_back(*auxObject);

	auxObject = new NutrientProviders("Maca", "Restaurador", 70.00);
	restorerNutrientProviderList.push_back(*auxObject);

	auxObject = new NutrientProviders("Uva", "Restaurador", 170.00);
	restorerNutrientProviderList.push_back(*auxObject);

	auxObject = new NutrientProviders("Banana", "Restaurador", 130.00);
	restorerNutrientProviderList.push_back(*auxObject);

};