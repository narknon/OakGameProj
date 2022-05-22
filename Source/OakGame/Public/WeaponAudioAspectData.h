#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "WeaponConfigurationRtpc.h"
#include "WeaponAudioAspectData.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew)
class UWeaponAudioAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    int32 UseModeBitmask;
    
public:
    UPROPERTY(EditInstanceOnly)
    TArray<UWwiseEvent*> ConfigurationEvents;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FWeaponConfigurationRtpc> ConfigurationRtpcs;
    
    UPROPERTY(EditInstanceOnly)
    UWwiseEvent* ConfigureWwiseEvent;
    
    UWeaponAudioAspectData();
};

