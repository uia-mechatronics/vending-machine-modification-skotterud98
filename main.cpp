#include <cstdlib>              // Exit codes for main.
#include <iostream>             // std::cout

#include "soda.h"               // Include Soda class header (makes class declaration visible).
#include "vendingmachine.h"     // Include VendingMachine clase header (makes class declaration visible).


// This is a C++ style comment. Compiler will ignore all comments.


// The C++ program starts execution here.
int main()
{
    // Print a message at startup.

    // Create vendingMachine object. Constructor will be called with no parameters.
    VendingMachine vendingMachine("Tarjei");
    // Print inventory using public printInventory member function (method).
    vendingMachine.printInventory();


    // Create a cola object. Constructor will be called with given parameters.
    Soda cola("Coca Cola", 34, 4);
    // We have a variable named cola with Soda as its data type.

    Soda fanta("Fanta", 33, 10);
    Soda vann("Bonaqua", 25, 20);

    // Call the VendingMachine addType function with cola variable as parameter.
    vendingMachine.addType(cola);
    vendingMachine.addType(fanta);
    vendingMachine.addType(vann);
    // Print inventory using public printInventory member function (method).
    vendingMachine.printInventory();

    vendingMachine.printMenu();



    // Print a message just before exiting.
    std::cout << "\n* * *" << std::endl;
    std::cout << "Vending machine shutting down ... BYE!" << std::endl << std::endl;


    // Signal "no error occured" to the world outside our small application.
    return EXIT_SUCCESS; // Could also return 0 but this is the most correct way...
}
