#pragma once
#include "AppSphereOps.h"
#include "..\Core\GuidObject.h"

// TODO these probably shoudl be in their own file, 
// but deferring this to when get a generator to handle this for us
enum JournalSphereBuilderTypes
{
	JournalTypesOriginAndRadius, /**Represents the sphere created by providing Origin and Radius Lengths. */
	JournalTypesSectorAndAngle, /**Represents the sphere created by providing Secyor and Angle.*/
	JournalTypesCirclePoints /**Represents the sphere created by providing Circle Points. */
};

namespace SphereApplication
{
	class Sphere;

	class APPSPHEREOPS_API SphereBuilder : public GuidObject
	{
	public:
		SphereBuilder() = delete;
		SphereBuilder(SphereApplication::Sphere* sphere, int guid);
		JournalSphereBuilderTypes GetType();
		void SetType(JournalSphereBuilderTypes type);

	private:
		Sphere* m_sphere;
		JournalSphereBuilderTypes m_journalSphereBuilderTypes;

	};
}


