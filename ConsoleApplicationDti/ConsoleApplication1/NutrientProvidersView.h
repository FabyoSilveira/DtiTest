#ifndef NutrientProvidersView_H
#define NutrientProvidersView_H
#include "NutrientProviders.h"
#include "NutrientProvidersController.h"
#include <list>

class NutrientProvidersView {

public:

	NutrientProvidersView();

	void showNutrientProvidersRegisterMenu(list<NutrientProviders>* nutrientProvidersList, string group);
	void showNutrientProvidersList(list<NutrientProviders> energeticNutrientProvidersList, list<NutrientProviders> constructorNutrientProvidersList, list<NutrientProviders> restorerNutrientProvidersList);

private:

	NutrientProvidersController controllerObject;
	NutrientProviders nutrientProvidersObject;

};

#endif
