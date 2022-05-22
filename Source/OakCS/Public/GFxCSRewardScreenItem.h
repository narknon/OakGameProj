#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCSRewardScreenItem.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKCS_API UGFxCSRewardScreenItem : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* ItemLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* ItemValue;
    
public:
    UGFxCSRewardScreenItem();
};

