#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>
#include "orgComponent.h"

class individual : public orgComponent {

private:
	int uniqueId;
	std::string CostCenter;
	int CostToCompany;

public:
	individual(int uniqueId, std::string CostCenter, int CostToCompany);

	int getUniqueId();

	void setUniqueId(int uniqueId);

	std::string getCostCenter();

	void setCostCenter(std::string CostCenter);

	int getCostToCompany();

	void setCostToCompany(int CostToCompany);

	int getTotalExpenditure();

	int getExpenditureByCostCenter(const std::string& CostCenter);
};

#endif
