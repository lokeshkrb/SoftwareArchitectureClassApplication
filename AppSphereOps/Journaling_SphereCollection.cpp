#include "Journaling_SphereCollection.h"
#include "Sphere.h";
#include "SphereBuilder.h";
#include "..\AppPartOps\PartOps.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"

void Journaling_SphereCollection_CreateSphereBuilder(Application::PartFile* part, SphereApplication::Sphere* sphere)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("CreateSphereBuilder", part);
		JournalInClassParam(sphere, "AutomationAPI::Sphere", "sphere");
	}

	if (IsJournaling())
	{
		JournalReturnClass(nullptr, "AutomationAPI::Spherebuilder", "Spherebuilder");
		JournalEndCall();
	}

}
