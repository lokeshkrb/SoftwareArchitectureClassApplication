#include "SphereFeature.h"
#include "Sphere.h"
#include "SphereExtrude.h"


void ProcessFeature(std::string featureType, std::ifstream& streamObject)
{

	if (featureType == "Extrude")
	{
		ReadInExtrude(streamObject);
	}
	else if (featureType == "Block")
	{
		ProcessSphere(streamObject);
	}

}
