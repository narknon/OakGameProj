#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxVaultHunterProfileCardChangeStatusCell.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient)
class UGFxVaultHunterProfileCardChangeStatusCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* IconClip;
    
public:
    UGFxVaultHunterProfileCardChangeStatusCell();
};

