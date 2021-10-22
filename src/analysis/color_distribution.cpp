
#include "color_distribution.hpp"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

std::vector<cv::Vec3b> ColorDistribution::dominantColors(const cv::Mat& image, int k) {
    // Convert image to a list of pixels
    cv::Mat pixels;
    image.convertTo(pixels, CV_32F);
    pixels = pixels.reshape(1, image.rows * image.cols);
    
    // Apply k-means clustering
    cv::Mat labels, centers;
    cv::kmeans(pixels, k, labels, cv::TermCriteria(), 3, cv::KMEANS_PP_CENTERS, centers);

    // Convert back to 8 bit values
    centers.convertTo(centers, CV_8U);

    // Extract dominant colors
    std::vector<cv::Vec3b> colors;
    for (int i = 0; i < centers.rows; ++i) {
        colors.push_back(centers.at<cv::Vec3b>(i, 0));
    }

    return colors;
}
    