#include "stdafx.h"

std::string Image::GetOutput(int width, int height) {
	std::string file_path;
	file_path = this->path;

	// application name
	size_t file_name_pos = path.find_last_of(".");
	std::string file_extension = path.substr(file_name_pos);

	// remove file extension from path
	file_path.erase(file_name_pos, file_extension.size());

	// change file name
	return (file_path + "-" + std::to_string(width) + "x" + std::to_string(height) + file_extension);
}

void Image::RescaleForTwitch() {
	// input image
	cv::Mat _input = cv::imread(this->path);

	// output image
	cv::Mat _output;

	// resize image
	cv::resize(_input, _output, cv::Size(4000, 4000), 0, 0);
	
	// save the image
	cv::imwrite(this->GetOutput(4000, 4000), _output);

	// resize image
	cv::resize(_input, _output, cv::Size(128, 128), 0, 0);

	// save the image
	cv::imwrite(this->GetOutput(128, 128), _output);

	// resize image
	cv::resize(_input, _output, cv::Size(56, 56), 0, 0);

	// save the image
	cv::imwrite(this->GetOutput(56, 56), _output);

	// resize image
	cv::resize(_input, _output, cv::Size(28, 28), 0, 0);

	// save the image
	cv::imwrite(this->GetOutput(28, 28), _output);
}