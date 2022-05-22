#pragma once
#include "CoreMinimal.h"
#include "WeaponReloadComponent.h"
#include "WeaponSingleFeedReloadComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponSingleFeedReloadComponent : public UWeaponReloadComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bDisableInterruptedToUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    int32 SingleFeedIncrement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SingleFeedCompletePercent;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_ClientReloadState)
    uint8 ClientReloadState;
    
public:
    UWeaponSingleFeedReloadComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnUserInput(uint8 InputChannel);
    
private:
    UFUNCTION()
    void OnRep_ClientReloadState();
    
};

