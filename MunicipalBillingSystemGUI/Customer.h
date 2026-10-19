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
    int refuseBinSize; // e.g. 240, 660, 900

public:
    Customer(int accNum = 0, string name = "", string address = "", string suburb = "",
        string propertyType = "", double prevUsage = 0, double currUsage = 0, int binSize = 240);

    void setAccountNumber(int accNum);
    int getAccountNumber() const;

    void setName(string name);
    string getName() const;

    void setAddress(string address);
    string getAddress() const;

    void setSuburb(string suburb);
    string getSuburb() const;

    void setPropertyType(string propertyType);
    string getPropertyType() const;

    void setPreviousWaterUsage(double usage);
    double getPreviousWaterUsage() const;

    void setCurrentWaterUsage(double usage);
    double getCurrentWaterUsage() const;

    void setRefuseBinSize(int size);
    int getRefuseBinSize() const;

    double computeWaterCharge() const;
    double computeWasteManagementCharge() const;
    double computeSewerageCharge() const;
    double computeTotalAmount() const;
};

#endif
