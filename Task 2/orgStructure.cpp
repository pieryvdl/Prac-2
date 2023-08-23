#include "orgStructure.h"

int orgStructure::getTotalExpenditure() {
	int totalExpenses = 0; //initialise a cost
	for (std::vector<orgComponent*>::const_iterator i = children.begin(); i != children.end(); ++i)
	{
		totalExpenses = totalExpenses + (*i)->getTotalExpenditure();
	}
	return totalExpenses;
}

int orgStructure::getExpenditureByCostCenter(std::string CostCenter) {
	int totalExpenses = 0; //initialise a cost
	for (std::vector<orgComponent*>::const_iterator i = children.begin(); i != children.end(); ++i)
	{
		totalExpenses = totalExpenses + (*i)->getExpenditureByCostCenter(CostCenter);
	}
	return totalExpenses;
}

void orgStructure::add(orgComponent* component) {
	this->children.push_back(component);
}
