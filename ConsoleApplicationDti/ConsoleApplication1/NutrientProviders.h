#ifndef NutrienteProviders_H
#define NutrienteProviders_H
#include <string>

using namespace std;

class NutrientProviders {

public:

	NutrientProviders();
	NutrientProviders(string p_name, string p_group, float p_energy);

	string name;
	string group;
	float energy;

private:

};

#endif