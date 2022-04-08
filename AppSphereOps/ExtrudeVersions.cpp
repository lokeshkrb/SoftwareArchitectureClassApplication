#include "ExtrudeVersions.h"


SphereApplication::SphereExtrude2::SphereExtrude2(std::string distance, std::string targetFace, std::string vectorObject, std::string booleanType, int guid)
	: SphereApplication::IExtrude(guid), m_distance(distance), m_targetFace(targetFace), m_vectorObject(vectorObject), m_booleanType(booleanType)
{

}

std::string SphereApplication::SphereExtrude2::GetVersion()
{
	return "2";
}