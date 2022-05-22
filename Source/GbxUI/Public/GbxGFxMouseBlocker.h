#pragma once
#include "CoreMinimal.h"
#include "GbxGFxSprite.h"
#include "GbxGFxMouseBlocker.generated.h"

UCLASS(DefaultConfig, NonTransient, Config=GbxUI)
class GBXUI_API UGbxGFxMouseBlocker : public UGbxGFxSprite {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bIsBlocking;
    
public:
    UGbxGFxMouseBlocker();
};

