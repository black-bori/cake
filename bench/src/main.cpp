#include <iostream>
#include <string_view>
#include <cake/cake.hpp>

int main(int argc, char* argv[]) {
    for (int i = 1; i < argc; ++i) {
        if (std::string_view(argv[i]) == "-v") {
            cake::print_version();
            return 0;
        }
    }
    
    std::cout << "Usage: " << argv[0] << " [-v]\n";
    return 0;
}