DYNAMIC PROMPT STACK:

C++ Program Requirements
Language:
C++

Create a C++ library that performs comprehensive analysis of images. The library should be capable of extracting the following information:
* 		File Format and Dimensions: Determine the file format and dimensions to get an idea of the image's basic structure.
* 		Color Distribution: Identify the dominant colors and their significance.
* 		Object Detection: Use pre-trained machine learning models for identifying significant objects.
* 		Text Extraction: If applicable, use Optical Character Recognition (OCR) to extract text.
* 		Facial Recognition: If faces are present, apply facial recognition algorithms to identify emotions or other relevant features.
* 		Composition Analysis: Examine the layout and composition to pinpoint focus areas.
* 		Feature Extraction: Extract shapes, edges, and other unique attributes.
* 		Metadata Extraction: Extract any available metadata for added context.

Output Format:
The extracted data should be saved as a file (.txt, .JSON, .XML, or CSV). The file format will be specified at runtime via CLI with the -f or --format flag. .txt by default.

Input:
The path to the image will be provided via CLI using the -p or --path flag. If no path is provided, the library should scan the main directory for any available images.

CLI Parameters:
* Include an interactive CLI mode allowing users to select which analyses to perform.

Code Structure:
Structure the code modularly for easy extensibility and future feature additions.
Error Handling:
Implement robust error handling to address issues like corrupted images or unsupported formats.File Not Found: Check if the file exists.
Unsupported Format: Check if the image format is supported.
Corrupted File: Check if the file can be opened without error.

Documentation/Comments:The code must be well-commented to explain each step.

README.md Outline
* Introduction: Brief overview of the library's purpose and capabilities.
* Installation: Steps for installing the library and its dependencies.
* Usage: How to use the library, including CLI options like -p or --path.
* Features: Detailed explanation of each feature (File Format, Color Distribution, etc.)
* Examples: Code snippets showing how to perform each type of analysis.
* Contributing: Guidelines for contributing to the library.
* License: Legal information and usage rights.
* Credits: Acknowledgment of any third-party libraries or datasets used.

Library Architecture
* Core Module: Handles the basic operations such as reading the image and converting it to different formats.
* Analysis Modules: These will include various algorithms for color distribution, object detection, text extraction, etc.
* CLI Interface: A user-friendly command-line interface for interacting with the library.
* Output Module: Responsible for saving the analysis data to a file in a specified format.

Create a new directory and initialize it as a C++ project
Create a CMakeLists.txt file to manage dependencies and build configurations.

Directory / File Structure
    * include/
        * core.hpp
    * analysis/
        * color_distribution.hpp
        * object_detection.hpp
        * text_extraction.hpp
        * facial_recognition.hpp
        * composition_analysis.hpp
        * feature_extraction.hpp
        * metadata_extraction.hpp
    * src/
        * core.cpp
        * analysis/
            * color_distribution.cpp
            * object_detection.cpp
            * text_extraction.cpp
            * facial_recognition.cpp
            * composition_analysis.cpp
            * feature_extraction.cpp
            * metadata_extraction.cpp
    * main.cpp
    * lib/ (Third-party libraries)
    * CMakeLists.txt
    * README.md

Core Module (core.hpp, core.cpp)
* Functions to read an image, get its format, and dimensions.
* Error handling for unsupported formats or corrupted images.

Analysis Modules
Each module should contain a class or a set of functions responsible for a specific type of analysis:
* Color Distribution: Use clustering algorithms like k-means to find dominant colors.
* Object Detection: Implement pre-trained machine learning models like YOLO or SSD.
* Text Extraction: Use an OCR library like Tesseract.
* Facial Recognition: Use a pre-trained model for facial recognition and emotion detection.
* Composition Analysis: Algorithms to find focus areas or points of interest in the image.
* Feature Extraction: Algorithms to find shapes, edges, and textures.
* Metadata Extraction: Extract EXIF or other metadata.

CLI Interface (main.cpp)
* Parse CLI arguments for path and file format.
* Provide an interactive mode to choose analyses.

Libraries
* OpenCV: For image processing tasks.
* TensorFlow: For object detection.
* Tesseract: For OCR.
* Exiv2: For metadata extraction.

Bash:
* Bash file for each operating system to install C++ and all the libraries needed for this project.