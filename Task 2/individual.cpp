#include "individual.h"
#include <string>

individual::individual(int uniqueId, std::string CostCenter, int CostToCompany) {
	this->uniqueId = uniqueId;
	this->CostCenter = CostCenter;
	this->CostToCompany = CostToCompany;
}

int individual::getUniqueId() {
	return uniqueId; //return the id
}

void individual::setUniqueId(int uniqueId) {
	this->uniqueId = uniqueId;
}

std::string individual::getCostCenter() {
	return CostCenter;
}

void individual::setCostCenter(std::string CostCenter) {
	this->CostCenter = CostCenter;
}

int individual::getCostToCompany() {
	return CostToCompany;
}

void individual::setCostToCompany(int CostToCompany) {
	this->CostToCompany = CostToCompany;
}

int individual::getTotalExpenditure(){
	return CostToCompany;
}

int individual::getExpenditureByCostCenter(const std::string& CostCenter){
	if (this->CostCenter == CostCenter){ ///we check if the costcenter matches
		return CostToCompany; //if it does return cost to company
	} else {
		return 0;
	}
}
