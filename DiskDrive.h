#ifndef DISKDRIVE_H
#define DISKDRIVE_H 

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class DiskDrive {
public:
    static const int BLOCK_SIZE = 512;
    static const int NUM_BLOCKS = 256;
    static const int MAX_FILE_SIZE = 10;
    static const int FILENAME_LENGTH = 8;

    DiskDrive(const std::string& allocationMethod) : allocationMethod(allocationMethod){ 
        initializeStorage();
        initializeBitmap(); 
    }

    void initializeStorage(){
        for(int i = 0; i < NUM_BLOCKS; i++){
            for(int j = 0; j < BLOCK_SIZE; j++){
                storage[i][j] = "";
            }
        }
        cout << "Storage initialized" << endl; 
    }

    void initializeBitmap(){
        bitmap[0] = 1;
        bitmap[1] = 1;
        for(int i = 2; i < NUM_BLOCKS; i++){
            bitmap[i] = 0;
        }
        cout << "Bitmap initialized" << endl;
    }

    void readBlock(){
        if(allocationMethod == "Contiguous"){
            cout << "I am reading a contiguous block" << endl;
        }
        else if(allocationMethod == "Chained"){
            cout << "I am reading a chained block" << endl;
        }
        else if(allocationMethod == "Indexed"){
            cout << "I am reading a indexed block" << endl;
        }
        else{
            cout << "No allocation method" << endl; 
        }
    }
    void writeBlock(){
        if(allocationMethod == "Contiguous"){
            cout << "I am writing to a contiguous block" << endl;
        }
        else if(allocationMethod == "Chained"){
            cout << "I am writing to a chained block" << endl;
        }
        else if(allocationMethod == "Indexed"){
            cout << "I am writing to a indexed block" << endl;
        }
        else{
            cout << "No allocation method" << endl; 
        }
    }
   

private:
    string allocationMethod;
    string storage[NUM_BLOCKS][BLOCK_SIZE];
    int bitmap[NUM_BLOCKS];
};
#endif