#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	cout<<"I am Rahil Rajpara "<<endl;
	cout<<"En_no    220130318071 "<<endl;
	cout<<"---------------------"<<endl;
	
    // Declare variables
    
    std::ifstream file;
    char character;
    int character_count = 0;

    // Prompt the user to enter the file path
    

    // Open the file
    file.open("test.txt");

    // Check if the file is open
    if (!file.is_open()) {
        std::cout << "Unable to open the file." << std::endl;
        return 1; // Exit with an error code
    }

    // Read the file character by character and count characters
    while (file.get(character)) {
        character_count++;
    }

    // Close the file
    file.close();

    // Print the result
    std::cout << "Number of characters in the file: " << character_count << std::endl;

    return 0; // Exit successfully
}

