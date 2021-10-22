
#include "core.hpp"

cv::Mat Core::readImage(const std::string& path) {
    // Implement error handling
    return cv::imread(path, cv::IMREAD_COLOR);
}

std::string Core::getFileFormat(const std::string& path) {
    // Extract and return the file format
    return "To be implemented";
}

std::pair<int, int> Core::getDimensions(const cv::Mat& image) {
    return std::make_pair(image.cols, image.rows);
}
    