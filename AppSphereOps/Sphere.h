#pragma once
#include "AppSphereOps.h"
#include "SphereFeature.h"

#include <iostream>
#include <fstream>
#include "..\Core\GuidObject.h"

void ProcessSphere(std::ifstream& streamObject);

namespace SphereApplication
{
	class APPSPHEREOPS_API ISphere : public GuidObject
	{
	public:
		virtual std::string GetVersion() = 0;
		ISphere(int guid) : GuidObject(guid)
		{

		}
		ISphere() = delete;
	};


	class APPSPHEREOPS_API Sphere : public SphereApplication::SphereFeature, public ISphere
	{
	public:
		Sphere() = delete;
		Sphere(int guid) : ISphere(guid)
		{

		}
		std::string GetVersion() override
		{
			return "1";
		}
	};
}

