#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class SphereBuilder;
	class Sphere;
	/// <summary>
	/// Creates Spheres.
	/// </summary>
	class AUTOMATIONBINDING_API SphereCollection
	{
	public:
		SphereCollection(int guid);

		virtual ~SphereCollection();

		SphereBuilder* CreateSphereBuilder(Sphere* block);


	private:
		int m_guid;
	};
}
