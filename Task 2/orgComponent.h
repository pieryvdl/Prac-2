#ifndef ORGCOMPONENT_H
#define ORGCOMPONENT_H

class orgComponent {


public:
	virtual int getTotalExpendature() = 0;

	virtual int getExpenditureByCostCenter(string CostCenter) = 0;
};

#endif
