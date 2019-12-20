#ifndef ProgramBuilder_H
#define ProgramBuilder_H
#include "ClientView.h"
#include "Client.h"
#include "ConsultView.h"
#include "Consult.h"
#include "NutrientProvidersView.h"
#include "NutrientProviders.h"
#include <list>

class ProgramBuilder {

public:

	ProgramBuilder();

	void startProgram();	

private:

	int userOption;

	void userOptionHandler(int userOption);

	void setDefaultNutrientProviders();

	ConsultView consultInterface;
	list<Consult> consultList;

	ClientView clientInterface;
	list<Client> clientList;

	NutrientProvidersView nutrientProvidersInterface;

	list<NutrientProviders> energeticNutrientProviderList;
	list<NutrientProviders> constructorNutrientProviderList;
	list<NutrientProviders> restorerNutrientProviderList;

};
#endif