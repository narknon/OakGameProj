#pragma once
#include "CoreMinimal.h"
#include "GbxWeaponSlotData.h"
#include "WeaponSlotData.generated.h"

class UGameResourceData;
class UWeaponSlotData;

UCLASS()
class UWeaponSlotData : public UGbxWeaponSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWeaponSlotData* LinkedWeaponSlot;
    
    UPROPERTY(EditAnywhere)
    UGameResourceData* AccuracyData;
    
    UPROPERTY(EditAnywhere)
    float CrosshairRotation;
    
    UWeaponSlotData();
};

