#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxPlayerStorageListCapacityObject.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class UGFxPlayerStorageListCapacityObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* SecondListHeaderClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ListCapacityLabelClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ListTypeIconClip;
    
public:
    UGFxPlayerStorageListCapacityObject();
};

