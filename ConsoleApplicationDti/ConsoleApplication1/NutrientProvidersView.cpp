#include "NutrientProvidersView.h"
#include "NutrientProviders.h"
#include <iostream>
#include <list>
#include <conio.h>

using namespace std;

NutrientProvidersView::NutrientProvidersView() {

}

void NutrientProvidersView::showNutrientProvidersRegisterMenu(list<NutrientProviders>* nutrientProvidersList, string group) {

	do {

		cin.ignore();

		cout << "Nome : ";
		getline(cin, nutrientProvidersObject.name);

		cout << "Valor Energetico : ";
		cin >> nutrientProvidersObject.energy;
		
		nutrientProvidersObject.group = group;

	} while (!controllerObject.subscribeConsult(nutrientProvidersList, nutrientProvidersObject));

	cout << "Alimento cadastrado com sucesso!" << endl;

}

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