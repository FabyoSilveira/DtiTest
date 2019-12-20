#include "NutrientProvidersModel.h"
#include <iostream>

using namespace std;

NutrientProvidersModel::NutrientProvidersModel() {


}

bool NutrientProvidersModel::subscribeNutrientProviders(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject) {

	if (verifyNutrientProvidersConsistence(nutrientProvidersList, nutrientProvidersObject)) {

		DAOobject.subscribeNutrientProviders(nutrientProvidersList, nutrientProvidersObject);

	}
	else {

		cout << errorMessage << endl;
		return false;
	}

	return true;
}

bool NutrientProvidersModel::verifyNutrientProvidersConsistence(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject) {


	return true;
}