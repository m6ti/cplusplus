// ask for a person's name, and generate a framed greeting
#include <iostream>
#include <string>

using std::cout;

int main()
{
    std::cout << "Enter name:";

    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, "+ name + "!";

    // Number of blanks surrounding the greeting
    const int pad = 1;

    // Total number of rows to write
    const int rows = pad * 2 + 3;


    // Seperate output from the input
    std::cout << std::endl;

    const std::string::size_type cols = greeting.size() + pad * 2 + 2;

    for ( int r = 0; r != rows ; r ++){
        // Write a row of output
        std::string::size_type c = 0;

        while (c != cols){
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1){
                std::cout << "*";
                ++c;
            }
            else{
                if (r==pad + 1 && c == pad + 1) {
                    std::cout << greeting;
                    c+=greeting.size();
                }else{
                    std::cout << " ";
                    ++c;
                }
            }
        }

        std::cout << std::endl;
    }

    return 0;
}