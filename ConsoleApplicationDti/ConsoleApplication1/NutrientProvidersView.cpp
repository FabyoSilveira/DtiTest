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

//Método para calcular todas as combinações para a meta de consumo diária definida pelo usuário
void NutrientProvidersView::showFoodCombinationMenu(list<NutrientProviders> energeticNutrientProvidersList, list<NutrientProviders> constructorNutrientProvidersList, list<NutrientProviders> restorerNutrientProvidersList) {

	int dailyConsumeGoal;
	foodCombination auxObject;
	//Iteradores do algoritmo de combinacoes
	list<NutrientProviders>::iterator i;
	list<NutrientProviders>::iterator j;
	list<NutrientProviders>::iterator k;

	energeticNutrientProvidersList.sort();
	constructorNutrientProvidersList.sort();
	restorerNutrientProvidersList.sort();

	cout << "Indique uma meta de consumo diario em Kcal, e o programa te mostrara todas as combinacoes de alimento dos 3 grupos possiveis." << endl;
	cout << "------------------------------------------" << endl;
	cout << "Digite a meta de consumo diario desejada : " << endl;
	cin >> dailyConsumeGoal;

	for (i = energeticNutrientProvidersList.begin(); i != energeticNutrientProvidersList.end(); ++i) {

		if(i->energy > dailyConsumeGoal){
			continue;
		}

		for (j = constructorNutrientProvidersList.begin(); j != constructorNutrientProvidersList.end(); ++j) {

			if((i->energy + j->energy) > dailyConsumeGoal){
				break;
			}

			for (k = restorerNutrientProvidersList.begin(); k != restorerNutrientProvidersList.end(); ++k) {

				if ((i->energy + j->energy + k->energy) > dailyConsumeGoal) {
					break;
				}	

				//Caso chegue até aqui é uma combinacao valida de alimentos
				//Preenche o alimento energetico
				auxObject.energeticNutrient.energy = i->energy;
				auxObject.energeticNutrient.group = i->group;
				auxObject.energeticNutrient.name = i->name;

				//Preenche o alimento construtor
				auxObject.constructorNutrient.energy = j->energy;
				auxObject.constructorNutrient.group = j->group;
				auxObject.constructorNutrient.name = j->name;

				//Preenche o alimento restaurador
				auxObject.restorerNutrient.energy = k->energy;
				auxObject.restorerNutrient.group = k->group;
				auxObject.restorerNutrient.name = k->name;

				//Adiciona uma combinacao a lista de combinacoes
				foodCombinationList.push_back(auxObject);

			}

		}

	}

	list<foodCombination>::iterator l;
	int combinationCount = 1;

	//Percorre a lista de combinacoes preenchida e mostra para o usuario

	if(!foodCombinationList.empty()){

		for(l = foodCombinationList.begin(); l != foodCombinationList.end(); ++l) {

			cout << "\n" << endl;
			cout << "  Combinacao " << combinationCount << " :" << endl;
			cout << "  --------------" << endl;
			cout << "  Nome - " << l->energeticNutrient.name << "";
			cout << "  Valor Energetico - " << l->energeticNutrient.energy << "";
			cout << "  Grupo Alimentar - " << l->energeticNutrient.group << endl;
			cout << "  Nome - " << l->constructorNutrient.name << "";
			cout << "  Valor Energetico - " << l->constructorNutrient.energy << "";
			cout << "  Grupo Alimentar - " << l->constructorNutrient.group << endl;
			cout << "  Nome - " << l->restorerNutrient.name << "";
			cout << "  Valor Energetico - " << l->restorerNutrient.energy << "";
			cout << "  Grupo Alimentar - " << l->restorerNutrient.group << endl;
			cout << "  -------------------" << endl;
			combinationCount++;
		}

	}
	else {
		
		cout << "\n" << endl;
		cout << "Para essa quantidade calorica nao existe combinacao possivel. :(" << endl;
		cout << "\n" << endl;
		cout << "Aperte qualquer tecla para voltar ao menu principal e cadastrar alimentos menos caloricos..." << endl;
		_getch();

	}
	

	//Destroi a lista de combinacoes
	foodCombinationList.clear();
}