#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <iostream>
#include <vector>
#include <cstring>
#include "DiskDrive.h"
using namespace std; 
class FileSystem {
public:
    FileSystem(const std::string& allocationMethod, DiskDrive& diskDrive) : allocationMethod(allocationMethod), diskDrive(diskDrive){ 
        diskDrive.initializeStorage();
        diskDrive.initializeBitmap(); 
    }

    void confirmFilesystem() {
        std::cout << "Allocation method is " << allocationMethod << std::endl;
    }

    void getFile(){
        if(allocationMethod == "Contiguous"){
            cout << "I am getting the Contiguous file" << endl;
            diskDrive.readBlock();
            cout << endl;
        }
        else if(allocationMethod == "Indexed"){
            cout << "I am getting the Indexed file" << endl;
            diskDrive.readBlock();
            cout << endl;
        }
        else if(allocationMethod == "Chained"){
            cout << "I am getting the chained file" << endl;
            diskDrive.readBlock();
            cout << endl;
        }
        else{
            cout << "No valid allocatio nmethod" << endl;
        }
    }

    void getFileTable(){
        if(allocationMethod == "Contiguous"){
            cout << "I am getting the file table contiguous" << endl;
            cout << endl;
        }
        else if(allocationMethod == "Indexed"){
            cout << "I am getting the file table indexed" << endl;
            cout << endl;
        }
        else if(allocationMethod == "Chained"){
            cout << "I am getting the file table chained" << endl;
            cout << endl; 
        }
        else{
            cout << "Not a valid file method" << endl; 
            cout << endl;
        }
    }

    void getFSB(){
        if(allocationMethod == "Contiguous"){
            cout << "I am getting the free space bitmap contiguous" << endl;
            cout << endl;
        }
        else if(allocationMethod == "Indexed"){
            cout << "I am getting the free space bitmap indexed" << endl; 
            cout << endl;
        }
        else if(allocationMethod == "Chained"){
            cout << "I am getting the free space bitmap chained" << endl;
            cout << endl;
        }
        else{
            cout << "No allocation method" << endl;
            cout << endl; 
        }
    }

    void DiskBlock(){
        if(allocationMethod == "Contiguous"){
            cout << "I am getting the disk block contiguous" << endl;
            cout << endl;
        }
        else if(allocationMethod == "Indexed"){
            cout << "I am getting the disk block indexed" << endl;
            cout << endl;
        }
        else if(allocationMethod == "Chained"){
            cout << "I am getting the disk block chained" << endl;
            cout << endl;
        }
        else{
            cout << "No allocation method" << endl;
            cout << endl; 
        }
    }

    void writeFile(){
        if(allocationMethod == "Contiguous"){
            cout << "Writing disk contiguous" << endl;
            diskDrive.writeBlock();
            cout << endl;
        }
        else if(allocationMethod == "Indexed"){
            cout << "Writing disk indexed" << endl;
            diskDrive.writeBlock();
            cout << endl;
        }
        else if(allocationMethod == "Chained"){
            cout << "Writing disk chained" << endl;
            diskDrive.writeBlock();
            cout << endl;
        }
        else{
            cout << "no allocation method" << endl;
            cout << endl;   
        }
    }
    // Other necessary methods for the file system go here

private:
    string allocationMethod;
    DiskDrive& diskDrive; 
};

#endif