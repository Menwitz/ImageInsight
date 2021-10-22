
#pragma once
#include <opencv2/opencv.hpp>
#include <vector>

class ColorDistribution {
public:
    static std::vector<cv::Vec3b> dominantColors(const cv::Mat& image, int k);
};
    