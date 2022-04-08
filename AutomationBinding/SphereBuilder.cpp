#include "SphereBuilder.h"
#include "CADObject.h"



AutomationAPI::CADObject* AutomationAPI::SphereBuilder::Commit()
{
	return nullptr;
}

void AutomationAPI::SphereBuilder::SetType(SphereBuilderTypes type)
{
}

AutomationAPI::SphereBuilder::SphereBuilderTypes AutomationAPI::SphereBuilder::GetType()
{
	return AutomationAPI::SphereBuilder::TypesOriginAndRadius;
}

void AutomationAPI::SphereBuilder::SetRadius(int r)
{
}

int AutomationAPI::SphereBuilder::GetRadius()
{
	return 0;
}

void AutomationAPI::SphereBuilder::SetSector(int s)
{
}

int AutomationAPI::SphereBuilder::GetSector()
{
	return 0;
}

void AutomationAPI::SphereBuilder::SetAngle(int a)
{
}

int AutomationAPI::SphereBuilder::GetAngle()
{
	return 0;
}

void AutomationAPI::SphereBuilder::SetOrigin(int x, int y, int z)
{
}

void AutomationAPI::SphereBuilder::GetOrigin(int& x, int& y, int& z)
{
}
