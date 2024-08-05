#include <iostream>
#include <cmath>

// Constants
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

// Function to calculate the number of servers required
int calculateServers(int numGuests) {
    return std::ceil(numGuests / 20.0);
}

// Function to calculate the cost of one server
double calculateServerCost(int numMinutes) {
    double cost1 = (numMinutes / 60) * CostPerHour;
    double cost2 = (numMinutes % 60) * CostPerMinute;
    return cost1 + cost2;
}

// Function to calculate the total food cost
double calculateFoodCost(int numGuests) {
    return numGuests * CostOfDinner;
}

// Function to calculate the average cost per person
double calculateAverageCost(double totalFoodCost, int numGuests) {
    return totalFoodCost / numGuests;
}

// Function to calculate the total cost
double calculateTotalCost(double totalFoodCost, double serverCost, int numServers) {
    return totalFoodCost + (serverCost * numServers);
}

// Function to calculate the deposit amount
double calculateDepositAmount(double totalCost) {
    return totalCost * 0.25;
}

int main() {
    // Ask for the event name
    std::string eventName;
    std::cout << "Enter the name of the event: ";
    std::cin >> eventName;

    // Ask for the first name and last name
    std::string firstName, lastName;
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    // Ask for the number of guests
    int numGuests;
    std::cout << "Enter the number of guests: ";
    std::cin >> numGuests;

    // Ask for the number of minutes
    int numMinutes;
    std::cout << "Enter the number of minutes: ";
    std::cin >> numMinutes;

    // Calculate the number of servers required
    int numServers = calculateServers(numGuests);

    // Calculate the cost of one server
    double serverCost = calculateServerCost(numMinutes);

    // Calculate the total food cost
    double totalFoodCost = calculateFoodCost(numGuests);

    // Calculate the average cost per person
    double averageCost = calculateAverageCost(totalFoodCost, numGuests);

    // Calculate the total cost
    double totalCost = calculateTotalCost(totalFoodCost, serverCost, numServers);

    // Calculate the deposit amount
    double depositAmount = calculateDepositAmount(totalCost);

    // Display the results
    std::cout << "Event Name: " << eventName << std::endl;
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Number of Guests: " << numGuests << std::endl;
    std::cout << "Number of Minutes: " << numMinutes << std::endl;
    std::cout << "Number of Servers: " << numServers << std::endl;
    std::cout << "Server Cost: rs" << serverCost << std::endl;
    std::cout << "Total Food Cost: rs" << totalFoodCost << std::endl;
    std::cout << "Average Cost per Person: rs" << averageCost << std::endl;
    std::cout << "Total Cost: rs" << totalCost << std::endl;
    std::cout << "Deposit Amount: rs" << depositAmount << std::endl;

    return 0;
}