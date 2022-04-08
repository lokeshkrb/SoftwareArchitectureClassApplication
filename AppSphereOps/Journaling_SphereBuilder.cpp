#include "Journaling_SphereBuilder.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"


void Journaling_SphereBuilder_SetType(SphereApplication::SphereBuilder* sphereBuilder, JournalSphereBuilderTypes type)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("SetType", sphereBuilder);
		JournalIntInParam(type, "type");
	}

	sphereBuilder->SetType(type);

	if (IsJournaling())
	{
		JournalEndCall();
	}

}


JournalSphereBuilderTypes Journaling_SphereBuilder_GetType(SphereApplication::SphereBuilder* sphereBuilder)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("GetType", sphereBuilder);
	}

	auto type = sphereBuilder->GetType();

	if (IsJournaling())
	{
		JournalReturnInt(type, "type");
		JournalEndCall();
	}

	return type;
}
