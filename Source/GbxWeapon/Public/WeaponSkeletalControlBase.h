#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributeInitializationData.h"
#include "WeaponSkeletalControlBase.generated.h"

class UWwiseEvent;

UCLASS(Abstract, EditInlineNew)
class UWeaponSkeletalControlBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ControlName;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlwaysUpdate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdateWhenAmmoChanges: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStartPaused: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSyncToFireRate: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAddInputOnUse: 1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData UseInputValue;
    
    UPROPERTY(EditAnywhere)
    float MinFireRate;
    
    UPROPERTY(EditAnywhere)
    float MaxFireRate;
    
    UPROPERTY(EditAnywhere)
    uint32 UseModeContextBitmask;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ReceivedInputSound;
    
    UPROPERTY(EditAnywhere)
    uint8 bAttachToBone: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseDefaultAudioComponent: 1;
    
    UWeaponSkeletalControlBase();
};

