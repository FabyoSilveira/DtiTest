#include "NutrientProvidersDAO.h"

NutrientProvidersDAO::NutrientProvidersDAO() {

}

void NutrientProvidersDAO::subscribeNutrientProviders(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject) {

	nutrientProvidersList->push_back(nutrientProvidersObject);

}