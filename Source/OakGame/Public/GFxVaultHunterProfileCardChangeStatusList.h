#pragma once
#include "CoreMinimal.h"
#include "GbxGFxGridScrollingList.h"
#include "GFxVaultHunterProfileCardChangeStatusList.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient)
class UGFxVaultHunterProfileCardChangeStatusList : public UGbxGFxGridScrollingList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> WrapperClip;
    
public:
    UGFxVaultHunterProfileCardChangeStatusList();
};

