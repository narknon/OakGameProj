#pragma once
#include "CoreMinimal.h"
#include "AIWeaponUserComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "OakAIWeaponUserComponent.generated.h"

class AOakAIController;
class UWeaponSlotData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakAIWeaponUserComponent : public UAIWeaponUserComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AOakAIController* OakAIController;
    
    UPROPERTY(EditAnywhere)
    UWeaponSlotData* WeaponSlot;
    
    UPROPERTY(Transient)
    FGbxAttributeInteger AIBurstCount;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat AIBurstDelay;
    
public:
    UOakAIWeaponUserComponent();
};

