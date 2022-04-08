#pragma once

#include "AppSphereOps.h"

#include <iostream>
#include <fstream>

static std::string SphereFeatureToken = "SphereFeature:";
static std::string EndSphereFeatureToken = "EndSphereFeature";


APPSPHEREOPS_API void ProcessSphereFeature(std::string sphereFeatureType, std::ifstream& streamObject);

namespace SphereApplication
{
	class APPSPHEREOPS_API SphereFeature
	{
	public:


	};
}

