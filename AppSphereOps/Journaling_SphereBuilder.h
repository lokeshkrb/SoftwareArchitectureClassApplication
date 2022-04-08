#pragma once

#include "AppSphereOps.h"
#include "..\AppSphereOps\SphereBuilder.h"


APPSPHEREOPS_API void Journaling_SphereBuilder_SetType(SphereApplication::SphereBuilder* sphereBuilder, JournalSphereBuilderTypes type);

APPSPHEREOPS_API JournalSphereBuilderTypes Journaling_SphereBuilder_GetType(SphereApplication::SphereBuilder* sphereBuilder);
