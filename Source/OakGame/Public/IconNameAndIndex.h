#pragma once
#include "CoreMinimal.h"
#include "IconNameAndIndex.generated.h"

USTRUCT()
struct OAKGAME_API FIconNameAndIndex {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 IconFlashIndex;
    
    UPROPERTY(Transient)
    FString IconTextureName;
    
    FIconNameAndIndex();
};

