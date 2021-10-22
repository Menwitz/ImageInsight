
#include <iostream>
#include "core.hpp"
#include "analysis/color_distribution.hpp"
#include "analysis/object_detection.hpp"
#include "output_module.hpp"

int main(int argc, char** argv) {
    std::string path;
    std::string format;

    // Argument parsing (simplified)
    // ...

    // Read image
    cv::Mat image = Core::readImage(path);

    // Fetch file format and dimensions
    // ...

    // Perform color distribution analysis
    auto dominantColors = ColorDistribution::dominantColors(image, 3);

    // Perform object detection analysis
    auto detectedObjects = ObjectDetection::detectObjects(image);

    // Output the results
    OutputModule::saveToTxt("output.txt", "Sample Output");

    return 0;
}
    