
#pragma once
#include <string>
#include <opencv2/opencv.hpp>

class Core {
public:
    static cv::Mat readImage(const std::string& path);
    static std::string getFileFormat(const std::string& path);
    static std::pair<int, int> getDimensions(const cv::Mat& image);
};
    