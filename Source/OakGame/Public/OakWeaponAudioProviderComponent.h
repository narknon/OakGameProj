#pragma once
#include "CoreMinimal.h"
#include "OakWeaponAudioProviderBase.h"
#include "WeaponShellCasingAudioParameters.h"
#include "OakWeaponAudioProviderComponent.generated.h"

class AWeapon;
class UWeaponHeatComponent;
class UWwiseEvent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakWeaponAudioProviderComponent : public UOakWeaponAudioProviderBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bWantsShellCasingAudio;
    
    UPROPERTY(EditAnywhere)
    FWeaponShellCasingAudioParameters ShellCasingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* GunshotEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* TargetLockedEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* TargetUnlockedEvent;
    
private:
    UPROPERTY(Export, Transient)
    UWeaponHeatComponent* CachedWeaponHeatComp;
    
public:
    UOakWeaponAudioProviderComponent();
    UFUNCTION()
    void OnTargetLockedStateChange(AWeapon* EventWeapon, bool bLockedOn);
    
};

