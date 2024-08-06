// HotelManager.h
#ifndef HOTELMANAGER_H
#define HOTELMANAGER_H

#include <string>
#include <unordered_map>

struct Guest {
    std::string name;
    int roomNumber;
};

class HotelManager {
public:
    void addGuest(const std::string& name, int roomNumber);
    void removeGuest(int roomNumber);
    void displayGuests();

private:
    std::unordered_map<int, Guest> guestMap;
};

#endif  // HOTELMANAGER_H
