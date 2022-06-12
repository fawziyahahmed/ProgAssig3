// FAWZIYAH AHMED

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    //I used string here to display the welcome message
    const string welcome = "ITCS 2530 - programming Assignment for week #3";

    //using I/O manipulators
    cout << setw(50) << setfill('.');
    cout << "\n";
    cout << welcome << "\n";
    cout << setw(50) << setfill('.');
    cout << "\n";
    cout << endl;

    //storing the total cost of shipping to 0
    double totalCost = 0;
   
    //storing the item name from the user
    string itemName;
    cout << "Please enter the item name (no spaces)" << setw(11) << ":";
    cin >> itemName;

    //ask if the item is fragile
    char Fragile;
    cout << "Is the item fragile? ( y=yes/n=no)" << setw(15) << ":";
    cin >> Fragile;

    //if yes then add $2 to the shipping cost, else no charge
    if (Fragile == 'y' || Fragile == 'Y') {
        totalCost += 2;
    }
    else if (Fragile == 'n' || Fragile == 'N') {
        totalCost == 0;
    }
    else { //If the user enters an incorrect value for the question, program will indicate that an incorrect value was entered
        cout << "Invalid entry, exiting" << endl;
        return 0;
    }
    
    //get order total
    double OrderTotal;
    cout << "Please enter your order total" << setw(20) << ":";
    cin >> OrderTotal;

    //destination to which the item will be shipped (USA, Canada, Australia, and Mars) 
    string destination;
    cout << "Please enter destination. (usa/can/aus/mars)" << setw(5) << ":";
    cin >> destination;


    //calculating based on the given value
    //USA destination
    if (destination.compare("usa") == 0) {
        if (OrderTotal <= 50) {
            totalCost += 6;
        }
        else if (OrderTotal <= 100) {
            totalCost += 9;
        }
        else if (OrderTotal <= 150) {
            totalCost += 12;
        }
        else {
            totalCost == 0;
        }
    }
    //Canada destination
    else if (destination.compare("can") == 0) {
        if (OrderTotal <= 50) {
            totalCost += 8;
        }
        else if (OrderTotal <= 100) {
            totalCost += 12;
        }
        else if (OrderTotal <= 150) {
            totalCost += 15;
        }
        else {
            totalCost == 0;
        }
    }
    //Australia destination
    else if (destination.compare("aus") == 0) {
        if (OrderTotal <= 50) {
            totalCost += 10;
        }
        else if (OrderTotal <= 100) {
            totalCost += 14;
        }
        else if (OrderTotal <= 150) {
            totalCost += 17;
        }
        else{
            totalCost == 0;
        }

    }
    //Mars destination
    else if (destination.compare("mars") == 0) {
        if (OrderTotal <= 50) {
            totalCost += 40;
        }
        else if (OrderTotal <= 100) {
            totalCost += 50;
        }
        else if (OrderTotal <= 150) {
            totalCost += 60;
        }
        else {
            totalCost == 0;
        }
    }
    
    //If the user enters an incorrect value for the question, program will indicate that an incorrect value was entered
    else {
        cout << "Invalid entry, exiting" << endl;
        return 0;
    }

    //changing the destination and item name to upper case 
    transform(destination.begin(), destination.end(), destination.begin(), ::toupper);
    transform(itemName.begin(), itemName.end(), itemName.begin(), ::toupper);

    // calculation the Total shipping cost
    const double TotalShipp = totalCost + OrderTotal;
    
    //display the value upto 2 decimal places
    cout << fixed << setprecision(2);

    //printing out the result
    cout << endl;
    cout << "Your item is" << setw(31) << itemName << endl;
    cout << "Your shipping cost is" << setw(19) << "$" << totalCost << endl;
    cout << "You are shipping to" << setw(23) << destination << endl;
    cout << "Your total shipping costs are" << setw(11) << "$" << TotalShipp << endl;
    cout << endl;
    cout << setfill('-');
    cout << setw(48) << "Thank You!" << endl;
    return 0;

}