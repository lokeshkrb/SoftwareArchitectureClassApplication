#include "SphereCollection.h"
#include "Sphere.h"
#include "SphereBuilder.h"
#include <iostream>

AutomationAPI::SphereCollection::SphereCollection(int guid) : m_guid(guid)
{

}

AutomationAPI::SphereCollection::~SphereCollection()
{

}

AutomationAPI::SphereBuilder* AutomationAPI::SphereCollection::CreateSphereBuilder(AutomationAPI::Sphere* sphere)
{
	if (sphere == nullptr)
	{
		std::cout << "Sphere is creation mode" << std::endl;
	}
	else
	{
		std::cout << "Sphere is edit/query mode" << std::endl;
	}


	return nullptr;

}
