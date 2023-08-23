#ifndef ORGSTRUCTURE_H
#define ORGSTRUCTURE_H

#include <string>
#include <vector>
#include "orgComponent.h"

class orgStructure : public orgComponent {
private: 
	std::vector<orgComponent*> children;

public:
	int getTotalExpenditure();

	int getExpenditureByCostCenter(std::string CostCenter);

	void add(orgComponent* component);
};

#endif
