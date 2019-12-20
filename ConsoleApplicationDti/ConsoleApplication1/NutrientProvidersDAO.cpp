#include "NutrientProvidersDAO.h"

NutrientProvidersDAO::NutrientProvidersDAO() {

}

//Armazena o alimento no sistema
void NutrientProvidersDAO::subscribeNutrientProviders(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject) {

	nutrientProvidersList->push_back(nutrientProvidersObject);

}