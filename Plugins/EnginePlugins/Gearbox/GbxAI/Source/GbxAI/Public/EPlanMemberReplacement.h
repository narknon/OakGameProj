#pragma once
#include "CoreMinimal.h"
#include "EPlanMemberReplacement.generated.h"

UENUM(BlueprintType)
enum class EPlanMemberReplacement : uint8 {
    AbandonPlanIfKilled,
    ReplaceMemberIfKilled,
    DoNotReplaceAndKeepGoing,
};

