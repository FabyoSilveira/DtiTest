#include "NutrientProvidersController.h"
#include <iostream>

using namespace std;

//Faz a chamada da classe de valida��es dos dados a serem cadastrados
bool NutrientProvidersController::subscribeConsult(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject) {

	return modelObject.subscribeNutrientProviders(nutrientProvidersList, nutrientProvidersObject);

}