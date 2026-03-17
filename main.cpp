#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  
#include <ctime>    

int main() {
    std::vector<std::string> names;
    int n;

    std::cout << "How many names you want to enter? ";
    std::cin >> n;
    std::cin.ignore(); 

    
    for(int i = 0; i < n; i++) {
        std::string name;
        std::cout << "Enter name #" << i + 1 << ": ";
        std::getline(std::cin, name);
        names.push_back(name);
    }

    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    
    int randomIndex = std::rand() % names.size();
    std::cout << "\n Randomly picked name: " << names[randomIndex] << " \n";

    return 0;
}
