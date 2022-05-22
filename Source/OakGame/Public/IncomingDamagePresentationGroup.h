#pragma once
#include "CoreMinimal.h"
#include "IncomingDamagePresentationData.h"
#include "IncomingDamagePresentationGroup.generated.h"

USTRUCT(BlueprintType)
struct FIncomingDamagePresentationGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIncomingDamagePresentationData PresentationLevels[4];
    
    OAKGAME_API FIncomingDamagePresentationGroup();
};

