#pragma once
#include "CoreMinimal.h"
#include "FriendIconNameAndIndex.generated.h"

USTRUCT()
struct OAKGAME_API FFriendIconNameAndIndex {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 IconFlashIndex;
    
    UPROPERTY(Transient)
    FString IconTextureName;
    
    FFriendIconNameAndIndex();
};

