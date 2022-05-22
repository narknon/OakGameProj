#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxGFxSprite.generated.h"

UCLASS(NonTransient)
class GBXUI_API UGbxGFxSprite : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* Graphics;
    
public:
    UGbxGFxSprite();
};

