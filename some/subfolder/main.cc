#include <iostream>
#include <string>
#include <fstream>
 
int main(int argc, char *argv[])
{
    std::cout << "Running demo..." << std::endl;

    std::string filename;
    filename = "some/subfolder/data/testfile.txt"; // <-- works
    // filename = "data/testfile.txt"; // <-- Does not work

    std::ifstream f(filename.c_str());
    bool found = f.good();

    std::cout << "File at '" << filename << "' " << 
        found ? "NOT found" : "found";

    return found ? EXIT_SUCCESS : EXIT_FAILURE;
}