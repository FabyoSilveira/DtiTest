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
	void showFoodCombinationMenu(list<NutrientProviders> energeticNutrientProvidersList, list<NutrientProviders> constructorNutrientProvidersList, list<NutrientProviders> restorerNutrientProvidersList);

private:

	typedef struct foodCombination {
		
		NutrientProviders energeticNutrient;
		NutrientProviders constructorNutrient;
		NutrientProviders restorerNutrient;

	};

	list<foodCombination> foodCombinationList;

	NutrientProvidersController controllerObject;
	NutrientProviders nutrientProvidersObject;

};

#endif
