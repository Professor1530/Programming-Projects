#include "Customer.h"

Customer::Customer(int accNum, string name, string address, string suburb,
    string propertyType, double prevUsage, double currUsage, int binSize)
    : accountNumber(accNum), name(name), address(address), suburb(suburb),
    propertyType(propertyType), previousWaterUsage(prevUsage),
    currentWaterUsage(currUsage), refuseBinSize(binSize) {
}

void Customer::setAccountNumber(int accNum) { accountNumber = accNum; }
int Customer::getAccountNumber() const { return accountNumber; }

void Customer::setName(string name) { this->name = name; }
string Customer::getName() const { return name; }

void Customer::setAddress(string address) { this->address = address; }
string Customer::getAddress() const { return address; }

void Customer::setSuburb(string suburb) { this->suburb = suburb; }
string Customer::getSuburb() const { return suburb; }

void Customer::setPropertyType(string propertyType) { this->propertyType = propertyType; }
string Customer::getPropertyType() const { return propertyType; }

void Customer::setPreviousWaterUsage(double usage) { previousWaterUsage = usage; }
double Customer::getPreviousWaterUsage() const { return previousWaterUsage; }

void Customer::setCurrentWaterUsage(double usage) { currentWaterUsage = usage; }
double Customer::getCurrentWaterUsage() const { return currentWaterUsage; }

void Customer::setRefuseBinSize(int size) { refuseBinSize = size; }
int Customer::getRefuseBinSize() const { return refuseBinSize; }

// Charges
double Customer::computeWaterCharge() const {
    if (propertyType == "Business") return currentWaterUsage * 52.05;
    else return currentWaterUsage * 38.21;
}

double Customer::computeWasteManagementCharge() const {
    if (propertyType == "Indigent" && refuseBinSize == 240) return 111.44;
    if (propertyType == "Residential" && refuseBinSize == 240) return 222.88;
    if (propertyType == "Flats/Townhouses" && refuseBinSize == 240) return 222.88;
    if (propertyType == "Business") {
        if (refuseBinSize == 240) return 584.46;
        if (refuseBinSize == 660) return 1754.76;
        if (refuseBinSize == 900) return 2339.55;
    }
    return 0;
}

double Customer::computeSewerageCharge() const {
    if (currentWaterUsage <= 200) return 16.85 * currentWaterUsage;
    else if (currentWaterUsage <= 2500) return 15.54 * currentWaterUsage;
    else return 13.61 * currentWaterUsage;
}

double Customer::computeTotalAmount() const {
    return computeWaterCharge() + computeWasteManagementCharge() + computeSewerageCharge();
}