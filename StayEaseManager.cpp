// HotelManager.cpp
#include "HotelManager.h"
#include <iostream>

void HotelManager::addGuest(const std::string& name, int roomNumber) {
    Guest guest;
    guest.name = name;
    guest.roomNumber = roomNumber;

    guestMap.insert({roomNumber, guest});

    std::cout << "Guest added successfully." << std::endl;
}

void HotelManager::removeGuest(int roomNumber) {
    auto it = guestMap.find(roomNumber);
    if (it != guestMap.end()) {
        guestMap.erase(it);
        std::cout << "Guest removed successfully." << std::endl;
    } else {
        std::cout << "Guest with room number " << roomNumber << " not found." << std::endl;
    }
}

void HotelManager::displayGuests() {
    if (guestMap.empty()) {
        std::cout << "No guests in the hotel." << std::endl;
    } else {
        std::cout << "Guests in the hotel: " << std::endl;
        for (const auto& pair : guestMap) {
            std::cout << "Room Number: " << pair.first << ", Guest Name: " << pair.second.name << std::endl;
        }
    }
}
