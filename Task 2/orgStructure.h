#ifndef ORGSTRUCTURE_H
#define ORGSTRUCTURE_H

using namespace std;

#include "orgComponent.h"

class orgStructure : public orgComponent {


public:
	int getTotalExpenditure();

	int getExpenditureByCostCenter(std::string CostCenter);

	void add(orgComponent* component);
};

#endif
