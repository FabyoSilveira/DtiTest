#include "NutrientProvidersController.h"
#include <iostream>

using namespace std;

bool NutrientProvidersController::subscribeConsult(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject) {

	return modelObject.subscribeNutrientProviders(nutrientProvidersList, nutrientProvidersObject);

}