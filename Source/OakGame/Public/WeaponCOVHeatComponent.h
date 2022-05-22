#pragma once
#include "CoreMinimal.h"
#include "WeaponHeatComponent.h"
#include "COVBrokenEffectData.h"
#include "WeaponCOVHeatComponent.generated.h"

class UStaticMeshComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponCOVHeatComponent : public UWeaponHeatComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinShotsToBreak;
    
    UPROPERTY(EditAnywhere)
    int32 MaxShotsToBreak;
    
    UPROPERTY(EditAnywhere)
    float ConsecutiveBreakInfluence;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FCOVBrokenEffectData> BrokenEffects;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Jankiness;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Broken)
    bool bBroken;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    int32 NumShotsToBreak;
    
    UPROPERTY(Replicated, Transient)
    int8 SelectedBrokenEffectsIndex;
    
    UPROPERTY(Transient)
    int32 NumOverheatedShots;
    
    UPROPERTY(Transient)
    float RepairHeatCooldownRate;
    
    UPROPERTY(Export, Transient)
    TArray<UStaticMeshComponent*> BrokenMeshComponents;
    
public:
    UWeaponCOVHeatComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void RepairedNotify();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRepaired();
    
    UFUNCTION()
    void OnRep_Broken(bool bWasBroken);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBroken();
    
};

