// Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)
#include <iostream>
#include <string>
using namespace std;

// Base class Cricketer
class Cricketer {
protected:
    int pid;          // Player ID
    string name;     // Player Name

public:
    void getDetails() {
        cout << "Enter Player ID: ";
        cin >> pid;
        cin.ignore(); // Ignore the newline character left in the input buffer
        cout << "Enter Player Name: ";
        getline(cin, name);
    }

    void showDetails() const {
        cout << "Player ID: " << pid << endl;
        cout << "Player Name: " << name << endl;
    }
};

// Derived class Batsman
class Batsman : public Cricketer {
private:
    int totalRuns;       // Total runs scored
    int inningsPlayed;   // Number of innings played
    int bestPerformance; // Best performance in a match

public:
    // Function to input data for Batsman
    void getBatsmanDetails() {
        getDetails(); // Get details from the base class
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        cout << "Enter Number of Innings Played: ";
        cin >> inningsPlayed;
        cout << "Enter Best Performance (runs in a match): ";
        cin >> bestPerformance;
    }

    // Function to calculate average runs
    float calculateAverageRuns() const {
        if (inningsPlayed > 0) {
            return static_cast<float>(totalRuns) / inningsPlayed;
        }
        return 0.0; // Return 0 if no innings have been played
    }

    // Function to display Batsman details
    void showBatsmanDetails() const {
        showDetails(); // Call base class function
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Innings Played: " << inningsPlayed << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << calculateAverageRuns() << endl;
    }
};

int main() {
    Batsman batsman; // Create a Batsman object
    batsman.getBatsmanDetails(); // Input Batsman details
    batsman.showBatsmanDetails(); // Display Batsman details

    return 0;
}