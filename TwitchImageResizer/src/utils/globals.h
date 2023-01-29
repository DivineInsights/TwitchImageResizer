#pragma once

class Globals {
public:
	/// <summary>
	/// Get the application directory path
	/// </summary>
	/// <returns>path of the application</returns>
	std::string GetAppPath() {
		return this->app_path;
	}

	/// <summary>
	/// Set the application directory path
	/// </summary>
	/// <param name="path">path of the application</param>
	void SetAppPath(std::string path);
private:
	std::string app_path;
}; extern Globals _globals;