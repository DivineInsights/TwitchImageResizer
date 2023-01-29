#include "stdafx.h"

int main(int argc, char* argv[]) {
	// argv[0] = application path
	// argv[1] = image path

	if (argc != 2) {
		printf("Please drag and drop the image onto the exe to resize image!\n");
		system("pause");
		return 0;
	}

	// set application path
	_globals.SetAppPath(argv[0]);

	// set image path
	Image _image(argv[1]);

	// rescale image for twitch (28x28, 56x56, 112x112)
	_image.RescaleForTwitch();
	return 0;
}