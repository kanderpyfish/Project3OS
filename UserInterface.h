#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <iostream>
#include <string>
#include "FileSystem.h"
using namespace std; 
class UserInterface {
public:
    UserInterface(FileSystem& fileSystem) : fileSystem(fileSystem){}

    void displayMenu() {
        std::cout << "1) Display a file\n"
                  << "2) Display the file table\n"
                  << "3) Display the free space bitmap\n"
                  << "4) Display a disk block\n"
                  << "5) Copy a file from the simulation to a file on the real system\n"
                  << "6) Copy a file from the real system to a file in the simulation\n"
                  << "7) Delete a file\n"
                  << "8) Exit\n";
    }

    void executeChoice(int choice) {
        switch (choice) {
            case 1:
                displayFile();
                break;
            case 2:
                displayFileTable();
                break;
            case 3:
                displayFreeSpaceBitmap();
                break;
            case 4:
                displayDiskBlock();
                break;
            case 5:
                copyToRealSystem();
                break;
            case 6:
                copyToSimulation();
                break;
            case 7:
                deleteFile();
                break;
            case 8:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid choice.\n";
        }
    }

private:
    FileSystem& fileSystem;

    void displayFile() {
        fileSystem.getFile();
        // Implementation for displaying a file
        // Use fileSystem methods as needed
    }

    void displayFileTable() {
        fileSystem.getFileTable();
        // Implementation for displaying the file table
        // Use fileSystem methods as needed
    }

    void displayFreeSpaceBitmap() {
        fileSystem.getFSB();
        // Implementation for displaying the free space bitmap
        // Use fileSystem methods as needed
    }

    void displayDiskBlock() {
        fileSystem.DiskBlock(); 
        // Implementation for displaying a disk block
        // Use fileSystem methods as needed
    }

    void copyToRealSystem() {
        fileSystem.getFile();
        // Implementation for copying a file to the real system
        // Use fileSystem methods as needed
    }

    void copyToSimulation() {
        fileSystem.writeFile(); 
        // Implementation for copying a file to the simulation
        // Use fileSystem methods as needed
    }

    void deleteFile() {
        fileSystem.getFile();
        // Implementation for deleting a file
        // Use fileSystem methods as needed
    }
};
#endif