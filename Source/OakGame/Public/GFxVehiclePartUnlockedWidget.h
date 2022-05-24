#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "UGFxVehiclePartUnlockedWidgetState.h"
#include "GFxVehiclePartUnlockedWidget.generated.h"

class UInventoryPartData;
class UInventoryData;
class UGbxGFxObject;
class UGbxTextField;

UCLASS()
class UGFxVehiclePartUnlockedWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 NumPartIcons;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ContentClip;
    
    UPROPERTY(Transient)
    UGbxTextField* HeaderTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* HeaderTextShadowClip;
    
    UPROPERTY(Transient)
    UGbxTextField* UnlockedTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PartIconsClip;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> IconClips;
    
    UPROPERTY(Transient)
    int32 CurrentIconCount;
    
    UPROPERTY(Transient)
    UGFxVehiclePartUnlockedWidgetState RevealState;
    
public:
    UGFxVehiclePartUnlockedWidget();
private:
    UFUNCTION()
    void OnPartUnlocked(TSoftObjectPtr<UInventoryData> Vehicle, TSoftObjectPtr<UInventoryPartData> Part) const;
    
    UFUNCTION()
    void extOnPlayComplete() const;
    
};

