#pragma once
#include "CoreMinimal.h"
#include "CharacterCorpseState.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCorpseState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bEnableCorpseCleanup: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShouldTearOff: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideVisibleCorpseRemovalTime: 1;
    
    UPROPERTY(EditAnywhere)
    float OverrideVisibleCorpseRemovalTime;
    
    UPROPERTY(EditAnywhere)
    float ContactWithVehiclesTime;
    
    OAKGAME_API FCharacterCorpseState();
};

