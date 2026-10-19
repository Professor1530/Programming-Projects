#include <iostream>
#include <fstream>
#include "Customer.h"
using namespace std;

// Constants
const int MAX_CUSTOMERS = 100; 

// Function prototypes
int readCustomersFromCSV(const string& filename, Customer customers[], int maxSize);
void displayCustomerBills(const Customer customers[], int count);

int main() {
    Customer customers[MAX_CUSTOMERS];
    int count = readCustomersFromCSV("data/services.csv", customers, MAX_CUSTOMERS);
    displayCustomerBills(customers, count);
    return 0;
}

// Implement reading from CSV
int readCustomersFromCSV(const string& filename, Customer customers[], int maxSize) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Could not open the file!" << endl;
        return 0;
    }

    int count = 0;
    int accNum;
    string name, address, suburb, propertyType;
    double prevUsage, currUsage, binSize;

    // Example CSV parsing (comma-separated values)
    while (file >> accNum >> ws && getline(file, name, ',') &&
        getline(file, address, ',') && getline(file, suburb, ',') &&
        getline(file, propertyType, ',') &&
        file >> prevUsage >> currUsage >> binSize) {

        if (count < maxSize) {
            customers[count] = Customer(accNum, name, address, suburb, propertyType,
                prevUsage, currUsage, binSize);
            count++;
        }
        else {
            cerr << "Maximum customer limit reached!" << endl;
            break;
        }
    }

    file.close();
    return count;
}

// Function to display customer bills
void displayCustomerBills(const Customer customers[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "Account Number: " << customers[i].getAccountNumber() << "\n"
            << "Name: " << customers[i].getName() << "\n"
            << "Water Charge: " << customers[i].computeWaterCharge() << "\n"
            << "Waste Management Charge: " << customers[i].computeWasteManagementCharge() << "\n"
            << "Sewerage Charge: " << customers[i].computeSewerageCharge() << "\n"
            << "Total Amount Due: " << customers[i].computeTotalAmount() << "\n\n";
    }
}