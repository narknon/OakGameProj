#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "OakScreenLiquidArea.generated.h"

UCLASS(Abstract)
class OAKGAME_API AOakScreenLiquidArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor LiquidColorAndIntensity;
    
public:
    AOakScreenLiquidArea();
};

