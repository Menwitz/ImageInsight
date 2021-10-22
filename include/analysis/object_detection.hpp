
#pragma once
#include <opencv2/opencv.hpp>
#include <vector>
#include <string>

class ObjectDetection {
public:
    static std::vector<std::string> detectObjects(const cv::Mat& image);
};
    