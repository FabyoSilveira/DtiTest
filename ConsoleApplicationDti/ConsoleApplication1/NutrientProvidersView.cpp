#include "NutrientProvidersView.h"
#include "NutrientProviders.h"
#include <iostream>
#include <list>
#include <conio.h>

using namespace std;

NutrientProvidersView::NutrientProvidersView() {

}

//Menu de cadastro de alimento
void NutrientProvidersView::showNutrientProvidersRegisterMenu(list<NutrientProviders>* nutrientProvidersList, string group) {

	int userOption;

	do {

		cout << "Deseja prosseguir com o cadastro ou voltar ao menu principal? 1 - Prosseguir / 2 - Menu Principal" << endl;
		cin >> userOption;

		if (userOption != 1) {
			return;
		}

		cin.ignore();

		cout << "Nome : ";
		getline(cin, nutrientProvidersObject.name);

		cout << "Valor Energetico : ";
		cin >> nutrientProvidersObject.energy;
		
		nutrientProvidersObject.group = group;

	//Faz a chamada do fluxo de cadastro de alimento
	} while (!controllerObject.subscribeConsult(nutrientProvidersList, nutrientProvidersObject));

	cout << "Alimento cadastrado com sucesso!" << endl;

}

//Listagem de alimentos cadastrados
void NutrientProvidersView::showNutrientProvidersList(list<NutrientProviders> energeticNutrientProvidersList, list<NutrientProviders> constructorNutrientProvidersList, list<NutrientProviders> restorerNutrientProvidersList) {

	list<NutrientProviders>::iterator i;

	cout << "***************                          Lista de Alimentos                           ***************" << endl;
	cout << "\n" << endl;

	for (i = energeticNutrientProvidersList.begin(); i != energeticNutrientProvidersList.end(); ++i) {

		cout << "  Nome - " << i->name << "                     " << endl;
		cout << "  Valor Energetico - " << i->energy << "                   " << endl;
		cout << "  Grupo Alimentar - " << i->group << "                " << endl;
		cout << "  ------------------" << endl;
		cout << "\n" << endl;
	}

	for (i = constructorNutrientProvidersList.begin(); i != constructorNutrientProvidersList.end(); ++i) {

		cout << "  Nome - " << i->name << "                     " << endl;
		cout << "  Valor Energetico - " << i->energy << "                   " << endl;
		cout << "  Grupo Alimentar - " << i->group << "                " << endl;
		cout << "  ------------------" << endl;
		cout << "\n" << endl;
	}

	for (i = restorerNutrientProvidersList.begin(); i != restorerNutrientProvidersList.end(); ++i) {

		cout << "  Nome - " << i->name << "                     " << endl;
		cout << "  Valor Energetico - " << i->energy << "                   " << endl;
		cout << "  Grupo Alimentar - " << i->group << "                " << endl;
		cout << "  ------------------" << endl;
		cout << "\n" << endl;
	}

	cout << "*****************************************************************************************************" << endl;
	cout << "\n" << endl;
	cout << "Aperte qualquer tecla para voltar ao menu principal..." << endl;
	_getch();

}