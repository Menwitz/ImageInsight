
#pragma once
#include <string>
#include <vector>

class OutputModule {
public:
    static void saveToTxt(const std::string& filePath, const std::string& data);
    static void saveToJson(const std::string& filePath, const std::string& data);
    // Add methods for other formats
};
    