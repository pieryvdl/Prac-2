#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

class individual : orgComponent {

private:
	int uniqueId;
	string CostCenter;
	int CostToCompany;

public:
	individual(string uniqueId, string CostCenter, int CostToCompany);

	string getUniqueId();

	void setUniqueId(string uniqueId);

	string getCostCenter();

	void setCostCenter(string CostCenter);

	int getCostToCompany();

	void setCostToCompany(int CostToCompany);
};

#endif
