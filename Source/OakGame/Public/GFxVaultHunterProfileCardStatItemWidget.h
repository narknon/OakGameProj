#pragma once
#include "CoreMinimal.h"
#include "GbxGFxProgressBar.h"
#include "GFxVaultHunterProfileCardStatItemWidget.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class UGFxVaultHunterProfileCardStatItemWidget : public UGbxGFxProgressBar {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* ListTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* PercentageTextClip;
    
public:
    UGFxVaultHunterProfileCardStatItemWidget();
};

