#pragma once
#include "CoreMinimal.h"
#include "EMailItemType.generated.h"

UENUM(BlueprintType)
enum class EMailItemType : uint8 {
    None,
    GearboxMail,
    PlayerMail,
    StreamerMail,
    NPCMail,
    DownloadableEntitlement,
};

