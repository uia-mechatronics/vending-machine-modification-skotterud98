#include "vendingmachine.h" // Includes the header file for this class for class declaration visibility.
#include <iostream>
#include <vector>


// Definition of VendingMachine constructor.
VendingMachine::VendingMachine(std::string nameOfOwner)
    : sodaTypes_()  // Initialization of sodaTypes_ vector. Explicit call to the constructor.
    , nameOfOwner_(nameOfOwner)
{
    std::cout << "\nVending machine object constructed! Owner's name is: " << nameOfOwner_ << "\n\n";
}


// Will be called when the object is deleted. Could do clean-up tasks here.
VendingMachine::~VendingMachine()
{
    // Do nothing.
}


// Add a Soda to the sodaTypes_ vector by using the vector push_back() method (function).
void VendingMachine::addType(Soda s)
{
    sodaTypes_.push_back(s);
}


// Print number of registered sodaTypes (types we added to the sodaTypes_ vector).
void VendingMachine::printInventory()
{
    std::cout << "Number of soda types registered: " << sodaTypes_.size() << std::endl;
}

void VendingMachine::printMenu()
{
    std::cout << "\nSoda menu:" << std::endl;

    for (uint8_t i = 0; i < sodaTypes_.size(); i++)
    {
        //Printing name
        std::cout << sodaTypes_.operator[](i).name_ << "\t\t";

        //Printing price
        std::cout << sodaTypes_.operator[](i).price_ << " kr" << "\t\t";

        //Printing inventory
        std::cout << "Inventory: " << sodaTypes_.operator[](i).inventory_ << std::endl;
    }
}
