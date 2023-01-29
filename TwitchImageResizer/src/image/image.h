#pragma once

class Image {
public:
	Image(std::string image_path) {
		this->path = image_path;
	}

	/// <summary>
	/// Sets the image path
	/// </summary>
	/// <param name="image_path">Image path</param>
	void SetImagePath(std::string image_path) {
		this->path = path;
	}


	/// <summary>
	/// Gets the output filename based off the size
	/// </summary>
	/// <param name="width">the width of the image</param>
	/// <param name="height">the height of the image</param>
	/// <returns>output directory with file name</returns>
	std::string GetOutput(int width, int height);

	/// <summary>
	/// resizes the images for twitch formats
	/// </summary>
	void RescaleForTwitch();
private:
	std::string path;
}; 