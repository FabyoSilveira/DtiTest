#ifndef NutrientProvidersController_H
#define NutrientProvidersController_H
#include "NutrientProviders.h"
#include "NutrientProvidersModel.h"
#include <list>

class NutrientProvidersController {

public:

	bool subscribeConsult(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject);

private:

	NutrientProvidersModel modelObject;

};

#endif