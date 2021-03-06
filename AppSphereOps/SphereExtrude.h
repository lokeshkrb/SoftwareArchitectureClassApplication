#pragma once
#include "AppSphereOps.h"
#include "SphereFeature.h"
#include <iostream>
#include <fstream>
#include "..\Core\GuidObject.h"

void ReadInExtrude(std::ifstream& streamObject);

namespace SphereApplication
{
	class APPSPHEREOPS_API IExtrude : public GuidObject
	{
	public:
		virtual std::string GetVersion() = 0;
		IExtrude(int guid) : GuidObject(guid)
		{

		}
	};


	class APPSPHEREOPS_API SphereExtrude : public SphereApplication::SphereFeature, public IExtrude
	{
	public:
		SphereExtrude() = delete;
		SphereExtrude(std::string distance, std::string targetFace, std::string vectorObject, std::string isAddition, std::string isSubtraction, int m_guid);
		std::string GetVersion() override;
		virtual ~SphereExtrude()
		{

		}

		const std::string& GetDistance()
		{
			return m_distance;
		};
		const std::string& GetTargetFace()
		{
			return m_targetFace;
		};
		const std::string& GetVectorObject()
		{
			return m_vectorObject;
		};
		const std::string& GetIsAddition()
		{
			return m_isAddition;
		};
		const std::string& GetIsSubtraction()
		{
			return m_isSubtraction;
		};

	private:
		std::string m_distance;
		std::string m_targetFace;
		std::string m_vectorObject;
		std::string m_isAddition;
		std::string m_isSubtraction;
	};
}





