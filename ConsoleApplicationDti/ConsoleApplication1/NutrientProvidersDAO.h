#ifndef NutrientProvidersDAO_H
#define NutrientProvidersDAO_H
#include "NutrientProviders.h"
#include <list>


class NutrientProvidersDAO {

public:

	NutrientProvidersDAO();

	void subscribeNutrientProviders(list<NutrientProviders>* nutrientProvidersList, NutrientProviders nutrientProvidersObject);

private:

};


#endif
