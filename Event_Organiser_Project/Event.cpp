#include<iostream>
#include <cmath>
#include<string>
using namespace std;

// Constants (Rate card)
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;



class Event{
    private:
    string eventName;
    string firastName,lastName;
    int numberofguest,numberofMinutes;

    public:
    void EventDetails(){
        cout<<"Enter the name of the Event:"<<endl;
        cin>>eventName;

        cout<<"Enter the customber's first and last name:"<<endl;
        cin>>firastName>>lastName;

        cout<<"Enter the number of guests"<<endl;
        cin>>numberofguest;

        cout<<"Enter the number of minutes in the event"<<endl;
        cin>>numberofMinutes;
    }
    void displayEventCost() {
        // Calculate  Number of one servers.
        int numberOfServers = ceil(numberofguest / 20.0);

        // Cost for one server
        double cost1 = (numberofMinutes / 60) * CostPerHour;
        double cost2 = (numberofMinutes % 60) * CostPerMinute;
        double costForOneServer = cost1 + cost2;

        // Food cost
        double totalFoodCost = numberofguest  * CostOfDinner;

        // Average cost per person
        double averageCost = totalFoodCost / numberofguest ;

        // Total event cost
        double totalCost = totalFoodCost + (costForOneServer * numberOfServers);

        // Deposit amount
        double depositAmount = totalCost * 0.25;


     // Display results
        cout << "\n******** EVENT Management System********\n";
        cout << "Event Name: " << eventName << endl;
        cout << "Organizer: " << firastName << " " << lastName << endl;
        cout << "Number of Guests: " << numberofguest << endl;
        cout << "Number of Servers Required: " << numberOfServers << endl;
        cout << "Cost for One Server: $" << costForOneServer << endl;
        cout << "Total Food Cost: $" << totalFoodCost << endl;
        cout << "Average Cost per Person: $" << averageCost << endl;
        cout << "Total Cost: $" << totalCost << endl;
        cout << "Deposit Amount (25%): $" << depositAmount << endl;
    }

};
int main(){
    Event e;
    e.EventDetails();
    e.displayEventCost();
    return 0;
}
