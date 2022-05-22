#pragma once
#include "CoreMinimal.h"
#include "StandInCharacterComponent.h"
#include "OperativeStandInActionAbility.h"
#include "CurrentOperativeStandInAbilitySlotInfo.h"
#include "OperativeStandInComponent.generated.h"

class UOakPlayerAbilitySlotData;
class UMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOperativeStandInComponent : public UStandInCharacterComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FOperativeStandInActionAbility> ActionAbilities;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakPlayerAbilitySlotData> ActionSkillSlot;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakPlayerAbilitySlotData> GrenadeSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMeshComponent* ActionSkillDeviceComponent;
    
    UPROPERTY(Transient)
    FCurrentOperativeStandInAbilitySlotInfo CurrentActionSkillSlot;
    
    UPROPERTY(Transient)
    FCurrentOperativeStandInAbilitySlotInfo CurrentGrenadeSlot;
    
    UPROPERTY(Transient)
    UOakPlayerAbilitySlotData* LastAbilitySlotSlotted;
    
public:
    UOperativeStandInComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetActionSkillDeviceVisible(bool bVisible);
    
};

