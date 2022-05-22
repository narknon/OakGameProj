#pragma once
#include "CoreMinimal.h"
#include "WeaponReloadComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "WeaponClipReloadComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponClipReloadComponent : public UWeaponReloadComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReloadCompletePercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat TapedReloadTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TapedReloadCompletePercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TapedClipCount;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ClientReloadState)
    uint8 ClientReloadState;
    
    UPROPERTY(Replicated, Transient)
    uint8 CurrentClip;
    
public:
    UWeaponClipReloadComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ClientReloadState();
    
};

