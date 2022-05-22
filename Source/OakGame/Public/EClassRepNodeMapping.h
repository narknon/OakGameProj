#pragma once
#include "CoreMinimal.h"
#include "EClassRepNodeMapping.generated.h"

UENUM(BlueprintType)
enum class EClassRepNodeMapping :  {
    NotRouted,
    RelevantForConnections,
    Spatialize_Static,
    Spatialize_Dynamic,
    Spatialize_Dormancy,
};

