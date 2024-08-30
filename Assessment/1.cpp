
// C ++ Programming Assessment Test 
 
// • Create a Project to demonstrate an Event Organiser Project which will help to manage the Events. The Project should contain all the necessary
//   requirements i.e  need to use conditional Statements, Loops, Function and also A Program should use  the concept of OOP. 
// • Give comments where it is required , for better understanding of codes. It will help you and the project evaluator. 
// • A Project should contain the following execution flow. 
// • When Execution of the main source file, the program should first ask the NAME OF THE EVENT. 
 
// 1. Example : Wedding 
 
// 2. After asking the event name , it should ask your  
// I. FIRST NAME,LAST NAME. 
// II. Number of Guests. 
// III. Number of Minutes. 
 
// 3. Once the all the Input requirement is over, you should be able to get the Event Cost Estimation. 
// Use the following rate card : 
// a. const double CostPerHour = 18.50; 
// b. const double CostPerMinute = .40; 
// c. const double CostOfDinner = 20.70; 
 
// i). GET Number of Servers. 
// (1 Server can handle 20 guests, so FIND how much server required for No. of Guests you Entered.) (use ceil() func. rounds up the nearest integer) 
 
// ii). GET COST of ONE Server. 
// Example :  
 
// Cost1 = (NumberOfMinutes / 60) * CostPerHour; 
// Cost2 = (NumberOfMinutes % 60) * CostPerMinute; 
// CostForOneServer = Cost1 + Cost2; 
 
// iii). GET COST for FOOD.  
// TotalFoodCost = NumberOfGuests * CostOfDinner; 
 
// iv). Get Average Cost Per Person 
// AverageCost = TotalFoodCost / NumberOfGuests; 
 
// v). GET TOTAL COST. 
// TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers); 
  
// vi). GET DEPOSIT AMOUNT 
// DepositAmount = TotalCost * .25; 
#include<iostream>
#include<cmath>
using namespace std;

class Event{
    protected:
        string event, name;
        int g_no, minutes;

    public:
        void input(){
            cout << "Enter event name: ";
            getline(cin, event);
            cout << "Enter customer's name: ";
            getline(cin, name);
            cout << "Enter number of guests: ";
            cin >> g_no;
            cout << "Enter event duration (minutes): ";
            cin >> minutes;
        }

        string get_name(){
            return name;
        }

        void show(){
            cout << "Event: " << event << endl;
            cout << "Organizer: " << name << endl;
        }
};

class Cost : public Event{
    private:
        const double CostPerHour = 18.50; 
        const double CostPerMinute = .40; 
        const double CostOfDinner = 20.70;

    public:
        double calculate_servent(int g_no){
            return ceil(g_no / 20.0);
        }

        double calculate_servent_cost(int minutes){
            return ceil((minutes / 60) * CostPerHour + (minutes % 60) * CostPerMinute);
        }

        double calculate_food_cost(int g_no){
            return ceil(g_no * CostOfDinner);
        }

        double calculate_total_cost(int g_no, int minutes){
            double servent_cost = calculate_servent_cost(minutes);
            double food_cost = calculate_food_cost(g_no);
            return ceil(servent_cost * calculate_servent(g_no) + food_cost);
        }

        double calculate_deposit(double total_cost){
            return ceil(total_cost * 0.25);
        }

        void display(){
            show();
            double total_cost = calculate_total_cost(g_no, minutes);
            cout << "Total Event Cost: " << total_cost << endl;
            cout << "Deposit Needed: " << calculate_deposit(total_cost) << endl;
        }
};

int main(){
    cout << "************************* Event Management System *************************" << endl;
    Cost c;
    c.input();
    cout << "************************* Event Estimate for: " << c.get_name() << " *************************" << endl;
    c.display();
    return 0;
}