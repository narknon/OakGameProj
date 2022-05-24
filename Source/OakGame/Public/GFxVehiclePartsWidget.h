#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxVehiclePartsWidget.generated.h"

class UInventoryPartData;
class UInventoryData;
class UGbxGFxObject;
class UGbxTextField;

UCLASS()
class UGFxVehiclePartsWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* InnerClip;
    
    UPROPERTY(Transient)
    UGbxTextField* NotificationText;
    
    UPROPERTY(Transient)
    UGbxTextField* NewPartCountText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CondensedPartIcon;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> PartIcons;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumPartIcons;
    
public:
    UGFxVehiclePartsWidget();
    UFUNCTION()
    void RefreshWidget() const;
    
    UFUNCTION()
    void PlayTurnInAnimation(TSoftObjectPtr<UInventoryData> Vehicle, TSoftObjectPtr<UInventoryPartData> Part) const;
    
    UFUNCTION()
    void extBeginCondensed() const;
    
};

