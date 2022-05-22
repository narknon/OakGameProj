#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "UObject/NoExportTypes.h"
#include "GFxVaultHunterProfileCardStatsWidget.generated.h"

class UGbxTextField;
class UGbxGFxSlider;
class UGFxVaultHunterProfileCardStatItemWidget;

UCLASS(NonTransient)
class UGFxVaultHunterProfileCardStatsWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* StatBarContainerClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* StatBarsScrollerClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StatBarsGridAreaClip;
    
    UPROPERTY(Transient)
    TArray<UGFxVaultHunterProfileCardStatItemWidget*> StatClips;
    
    UPROPERTY(Transient)
    UGbxTextField* TimePlayedTextClip;
    
    UPROPERTY(Transient)
    FVector2D StatBarsInitialPosition;
    
    UPROPERTY(Transient)
    float StatBarWindowHeight;
    
    UPROPERTY(Transient)
    float StatBarContentHeight;
    
public:
    UGFxVaultHunterProfileCardStatsWidget();
private:
    UFUNCTION()
    void OnStatBarScrollerUpdated(float SliderPercent);
    
};

