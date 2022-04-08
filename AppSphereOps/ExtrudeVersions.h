#pragma once

#include "SphereExtrude.h"
#include <string>
namespace SphereApplication
{
	class SphereExtrude2 : public SphereFeature, public IExtrude
	{
	public:
		SphereExtrude2(std::string distance, std::string targetFace, std::string vectorObject, std::string booleanType, int m_guid);
		std::string GetVersion() override;

		virtual ~SphereExtrude2()
		{

		}
		SphereExtrude2() = delete;

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
		const std::string& GetBooleanType()
		{
			return m_booleanType;
		};


	private:
		std::string m_distance;
		std::string m_targetFace;
		std::string m_vectorObject;
		std::string m_booleanType;

	};
}


