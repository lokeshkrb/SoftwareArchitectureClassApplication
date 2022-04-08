#include "Sphere.h"
#include <fstream>
#include "..\Core\StringUtils.h"


void ProcessSphere(std::ifstream& streamObject)
{
	std::cout << "    ProcessSphere" << std::endl;

	std::string line;
	bool done = false;
	while (!done)
	{
		getline(streamObject, line);
		std::cout << line << '\n';

		if (startsWith(line, EndSphereFeatureToken))
		{
			done = true;
		}


	}
}