#pragma once
#include "CoreMinimal.h"
#include "TrophyCaseBaseComponent.h"
#include "ChallengeTrophyBaseComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UChallengeTrophyBaseComponent : public UTrophyCaseBaseComponent {
    GENERATED_BODY()
public:
    UChallengeTrophyBaseComponent();
};

