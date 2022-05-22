#pragma once
#include "CoreMinimal.h"
#include "GFxCSButton.h"
#include "GFxCSBoosterItem.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKCS_API UGFxCSBoosterItem : public UGFxCSButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* DisplayName;
    
    UPROPERTY(Transient)
    UGbxTextField* Description;
    
    UPROPERTY(Transient)
    UGbxTextField* UnlockDescription;
    
    UPROPERTY(Transient)
    UGbxTextField* Price;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Picture;
    
    UPROPERTY(Transient)
    UGbxTextField* BoosterTimer;
    
public:
    UGFxCSBoosterItem();
};

