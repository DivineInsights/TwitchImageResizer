#include "stdafx.h"

Globals _globals;

void Globals::SetAppPath(std::string path) {
	// application name
	size_t file_name_pos = path.find_last_of("/\\");
	std::string file_name = path.substr(file_name_pos);

	// remove application name from path
	path.erase(file_name_pos, file_name.size());

	// set application path
	this->app_path = path;
}
