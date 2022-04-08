#pragma once
#include "AppSphereOps.h"

namespace SphereApplication
{
	class Sphere;
	class PartFile;
	class SphereBuilder;
}


APPSPHEREOPS_API void Journaling_SphereCollection_CreateSphereBuilder(SphereApplication::PartFile* part, SphereApplication::Sphere* sphere);

