
#include <iostream>
#include "core.hpp"

int main(int argc, char** argv) {
    std::string path;
    std::string format;

    // Argument parsing (simplified)
    // Implement using libraries like boost::program_options for a full-featured CLI

    // Read image
    cv::Mat image = Core::readImage(path);

    // Fetch file format and dimensions
    std::string fileFormat = Core::getFileFormat(path);
    auto dimensions = Core::getDimensions(image);

    std::cout << "File Format: " << fileFormat << std::endl;
    std::cout << "Dimensions: " << dimensions.first << "x" << dimensions.second << std::endl;

    return 0;
}
    