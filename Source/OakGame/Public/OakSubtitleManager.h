#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxSubtitleManagerInterface.h"
#include "OakSubtitleManager.generated.h"

UCLASS()
class OAKGAME_API UOakSubtitleManager : public UObject, public IGbxSubtitleManagerInterface {
    GENERATED_BODY()
public:
    UOakSubtitleManager();
    
    // Fix for true pure virtual functions not being implemented
};

