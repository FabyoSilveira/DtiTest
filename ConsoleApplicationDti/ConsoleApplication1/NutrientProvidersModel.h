#ifndef NutrientProvidersModel_H
#define NutrientProvidersModel_H
#include "NutrientProviders.h"
#include "NutrientProvidersDAO.h"
#include <list>
#include <string>

class NutrientProvidersModel {

public:

	NutrientProvidersModel();

	bool subscribeNutrientProviders(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject);

	bool verifyNutrientProvidersConsistence(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject);

	string errorMessage;

private:

	NutrientProvidersDAO DAOobject;

};

#endif