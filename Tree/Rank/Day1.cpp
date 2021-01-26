#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    string temp_str;
    int temp_int = 0;
    double temp_double = 0;
    std::cin>> temp_str;
    temp_int = atoi(temp_str.c_str());
    std::cin>>temp_str;
    temp_double = atof(temp_str.c_str());
    cin.ignore(numeric_limits<streamsize>::max(),'\n');   
    getline(cin,temp_str);
    std::cout<<temp_int+i<<std::endl;
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout<<temp_double+d<<std::endl;
    std::cout<<s+temp_str<<std::endl;
    return 0;
}