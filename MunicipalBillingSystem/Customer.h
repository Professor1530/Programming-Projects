#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
private:
    int accountNumber;
    string name;
    string address;
    string suburb;
    string propertyType;
    double previousWaterUsage;
    double currentWaterUsage;
    double refuseBinSize;

public:
    // Constructor
    Customer(int accNum, const string& name, const string& address, const string& suburb,
        const std::string& propertyType, double prevUsage, double currUsage, double binSize);

    // Setters and Getters
    void setAccountNumber(int accNum);
    int getAccountNumber() const;

    void setName(const string& name);
    string getName() const;

    void setAddress(const string& address);
    string getAddress() const;

    void setSuburb(const string& suburb);
    string getSuburb() const;

    void setPropertyType(const std::string& propertyType);
    string getPropertyType() const;

    void setPreviousWaterUsage(double usage);
    double getPreviousWaterUsage() const;

    void setCurrentWaterUsage(double usage);
    double getCurrentWaterUsage() const;

    void setRefuseBinSize(double size);
    double getRefuseBinSize() const;

    // Methods to compute charges
    double computeWaterCharge() const;
    double computeWasteManagementCharge() const;
    double computeSewerageCharge() const;
    double computeTotalAmount() const;
};

#endif // CUSTOMER_H
