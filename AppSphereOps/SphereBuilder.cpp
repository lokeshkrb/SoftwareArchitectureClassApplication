#include "SphereBuilder.h"
#include <iostream>

Application::SphereBuilder::SphereBuilder(Application::Sphere* sphere, int guid) : GuidObject(guid), m_sphere(sphere)
{

	if (m_sphere == nullptr)
	{
		std::cout << "Sphere is creation mode" << std::endl;
	}
	else
	{
		std::cout << "Sphere is edit/query mode" << std::endl;
	}
}

JournalSphereBuilderTypes Application::SphereBuilder::GetType()
{
	return m_journalSphereBuilderTypes;
}
void Application::SphereBuilder::SetType(JournalSphereBuilderTypes type)
{
	m_journalSphereBuilderTypes = type;
}
