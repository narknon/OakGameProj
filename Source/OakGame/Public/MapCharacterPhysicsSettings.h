#pragma once
#include "CoreMinimal.h"
#include "MapCharacterPhysicsSettings.generated.h"

USTRUCT(BlueprintType)
struct FMapCharacterPhysicsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PlayerAirControlScale;
    
    OAKGAME_API FMapCharacterPhysicsSettings();
};

