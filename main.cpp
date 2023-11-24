#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "UserInterface.h"
#include "FileSystem.h" // Assuming you have a FileSystem class defined
#include "DiskDrive.h" 
using namespace std; 
int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <allocation_method>\n";
        return 1;
    }
    std::string allocationMethod = argv[1];
    DiskDrive dd(allocationMethod); 
    DiskDrive& diskDrive = dd;
    FileSystem fileSystem(allocationMethod, diskDrive);

    UserInterface userInterface(fileSystem);

    int choice;
    do {
        userInterface.displayMenu();
        std::cout << "Choice: ";
        std::cin >> choice;

        userInterface.executeChoice(choice);

    } while (choice != 8);

    return 0;
}