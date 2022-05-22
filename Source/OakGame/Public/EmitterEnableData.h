#pragma once
#include "CoreMinimal.h"
#include "EEmitterEnableMode.h"
#include "EmitterEnableData.generated.h"

USTRUCT(BlueprintType)
struct FEmitterEnableData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EmitterName;
    
    UPROPERTY(EditAnywhere)
    EEmitterEnableMode EnableMode;
    
    OAKGAME_API FEmitterEnableData();
};

