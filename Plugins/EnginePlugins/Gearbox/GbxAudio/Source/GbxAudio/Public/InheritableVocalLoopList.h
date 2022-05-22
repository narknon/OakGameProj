#pragma once
#include "CoreMinimal.h"
#include "CharacterVocalLoopImplementation.h"
#include "InheritableVocalLoopList.generated.h"

USTRUCT(BlueprintType)
struct FInheritableVocalLoopList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FCharacterVocalLoopImplementation> VocalLoops;
    
    GBXAUDIO_API FInheritableVocalLoopList();
};

