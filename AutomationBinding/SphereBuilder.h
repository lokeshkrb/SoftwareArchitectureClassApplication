#pragma once
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
	class CADObject;


	/// <summary>
	/// SphereBuilder manages to set various parameters like radius, origin, sector and angle to create a Sphere object.
	/// </summary>
	class AUTOMATIONBINDING_API SphereBuilder : public IBuilder
	{
	public:
		enum SphereBuilderTypes
		{
			TypesOriginAndRadius, /**Represents the sphere created by providing Origin and Radius. */
			TypesSectorAndAngle, /**Represents the sphere created by providing Sector and Angle.*/
			TypesCirclePoints /**Represents the sphere created by providing Circle Points. */
		};

		void SetType(SphereBuilderTypes type);
		SphereBuilderTypes GetType();

		void SetRadius(int r);
		int GetRadius();
		void SetSector(int s);
		int GetSector();
		void SetAngle(int a);
		int GetAngle();
		void SetOrigin(int x, int y, int z);
		void GetOrigin(int& x, int& y, int& z);


		CADObject* Commit() override;
	private:


	};
}
