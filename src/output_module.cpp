
#include "output_module.hpp"
#include <fstream>

void OutputModule::saveToTxt(const std::string& filePath, const std::string& data) {
    std::ofstream outFile(filePath);
    outFile << data;
    outFile.close();
}

void OutputModule::saveToJson(const std::string& filePath, const std::string& data) {
    // Implement JSON saving logic here
}
    