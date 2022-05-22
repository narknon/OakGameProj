#pragma once
#include "CoreMinimal.h"
#include "WeaponGenericUseComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "IronBearWeaponUseComponent_Jackhammer.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UIronBearWeaponUseComponent_Jackhammer : public UWeaponGenericUseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat FireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat AccuracyImpulse;
    
public:
    UIronBearWeaponUseComponent_Jackhammer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnUsed();
    
};

