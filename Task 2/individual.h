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
	individual(std::string uniqueId, std::string CostCenter, int CostToCompany);

	std::string getUniqueId();

	void setUniqueId(std::string uniqueId);

	std::string getCostCenter();

	void setCostCenter(std::string CostCenter);

	int getCostToCompany();

	void setCostToCompany(int CostToCompany);
};

#endif
