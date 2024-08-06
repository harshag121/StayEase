#include <iostream>
#include <string>
#include "HotelManager.h"
#include <limits> 

int getUserChoice() {
    int choice;
    std::cout << "==== Hotel Management System ====" << std::endl;
    std::cout << "1. Add Guest" << std::endl;
    std::cout << "2. Remove Guest" << std::endl;
    std::cout << "3. Display Guests" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice: ";

    while (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a number: ";
    }

    return choice;
}


int main() {
    HotelManager manager;

    int choice;
    do {
        choice = getUserChoice();

        switch (choice) {
            case 1: {
                std::string name;
                int roomNumber;
                std::cout << "Enter guest name: ";
                std::cin >> name;
                std::cout << "Enter room number: ";
                std::cin >> roomNumber;
                manager.addGuest(name, roomNumber);
                break;
            }
            case 2: {
                int roomNumber;
                std::cout << "Enter room number to remove guest: ";
                std::cin >> roomNumber;
                manager.removeGuest(roomNumber);
                break;
            }
            case 3: {
                manager.displayGuests();
                break;
            }
            case 4: {
                std::cout << "Exiting..." << std::endl;
                break;
            }
            default: {
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
            }
        }

        std::cout << std::endl;
    } while (choice != 4);

    return 0;
}
