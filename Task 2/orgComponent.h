#ifndef ORGCOMPONENT_H
#define ORGCOMPONENT_H

#include <string>

class orgComponent {

public:
	virtual int getTotalExpenditure() = 0;

	virtual int getExpenditureByCostCenter(const std::string& CostCenter) = 0;

	virtual ~orgComponent(){}
};

#endif
