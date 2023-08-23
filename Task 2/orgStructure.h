#ifndef ORGSTRUCTURE_H
#define ORGSTRUCTURE_H

class orgStructure : orgComponent {


public:
	int getTotalExpenditure();

	int getExpenditureByCostCenter(string CostCenter);

	void add(orgComponent* component);
};

#endif
