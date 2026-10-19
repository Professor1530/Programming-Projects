#include "Customer.h"
using namespace std;

// Constructor
Customer::Customer(int accNum, const string& name, const string& address, const string& suburb,
    const string& propertyType, double prevUsage, double currUsage, double binSize)
    : accountNumber(accNum), name(name), address(address), suburb(suburb),
    propertyType(propertyType), previousWaterUsage(prevUsage), currentWaterUsage(currUsage), refuseBinSize(binSize) {
}

// Setters and Getters
void Customer::setAccountNumber(int accNum) { accountNumber = accNum; }
int Customer::getAccountNumber() const { return accountNumber; }

void Customer::setName(const string& name) { this->name = name; }
string Customer::getName() const { return name; }

void Customer::setAddress(const string& address) { this->address = address; }
string Customer::getAddress() const { return address; }

void Customer::setSuburb(const string& suburb) { this->suburb = suburb; }
string Customer::getSuburb() const { return suburb; }

void Customer::setPropertyType(const string& propertyType) { this->propertyType = propertyType; }
string Customer::getPropertyType() const { return propertyType; }

void Customer::setPreviousWaterUsage(double usage) { previousWaterUsage = usage; }
double Customer::getPreviousWaterUsage() const { return previousWaterUsage; }

void Customer::setCurrentWaterUsage(double usage) { currentWaterUsage = usage; }
double Customer::getCurrentWaterUsage() const { return currentWaterUsage; }

void Customer::setRefuseBinSize(double size) { refuseBinSize = size; }
double Customer::getRefuseBinSize() const { return refuseBinSize; }

// Charge calculations
double Customer::computeWaterCharge() const {
    // Example calculation based on usage
    return currentWaterUsage * (propertyType == "Residential" ? 38.21 : 52.05);
}

double Customer::computeWasteManagementCharge() const {
    // Example calculation based on refuse bin size
    return refuseBinSize == 240 ? 222.88 : 584.46; // Simplified for example
}

double Customer::computeSewerageCharge() const {
    if (currentWaterUsage <= 200) return 16.85 * currentWaterUsage;
    else if (currentWaterUsage <= 2500) return 15.54 * currentWaterUsage;
    else return 13.61 * currentWaterUsage;
}

double Customer::computeTotalAmount() const {
    return computeWaterCharge() + computeWasteManagementCharge() + computeSewerageCharge();
}