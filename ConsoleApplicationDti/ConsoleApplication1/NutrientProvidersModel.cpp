#include "NutrientProvidersModel.h"
#include <iostream>

using namespace std;

NutrientProvidersModel::NutrientProvidersModel() {


}

//Valida o alimento e faz a chamada da classe de dados para armazena-lo no sistema
bool NutrientProvidersModel::subscribeNutrientProviders(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject) {

	if (verifyNutrientProvidersConsistence(*nutrientProvidersList, nutrientProvidersObject)) {

		DAOobject.subscribeNutrientProviders(nutrientProvidersList, nutrientProvidersObject);

	}
	else {

		cout << errorMessage << endl;
		cout << "\n" << endl;
		return false;
	}

	return true;
}

//Valida a consistencia dos dados a serem cadastrados
bool NutrientProvidersModel::verifyNutrientProvidersConsistence(list<NutrientProviders> nutrientProvidersList, NutrientProviders nutrientProvidersObject) {

	list<NutrientProviders>::iterator i;

	//Verifica unicidade do alimento no sistema
	for (i = nutrientProvidersList.begin(); i != nutrientProvidersList.end(); ++i) {

		if (i->name == nutrientProvidersObject.name) {

			errorMessage = "Ja existe um alimento com esse nome, cadastrado no sistema. Tente novamente!";
			return false;

		}

	}

	return true;
}