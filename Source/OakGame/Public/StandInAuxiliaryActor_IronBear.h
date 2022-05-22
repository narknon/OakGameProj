#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IronBearHardPointAugmentInfo.h"
#include "StandInAuxiliaryActor.h"
#include "HardPointSlotSettings.h"
#include "StandInAuxiliaryActor_IronBear.generated.h"

class UOakActionAbilityAugmentData;
class UGbxAction_CoordinatedEffect;
class UOakActionAbilityAugmentData_IronBear;
class UOakActionAbilityAugmentSlotData;
class UGbxSkeletalMeshComponent;

UCLASS(NonTransient)
class AStandInAuxiliaryActor_IronBear : public AStandInAuxiliaryActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UOakActionAbilityAugmentSlotData> LeftHardPointSlot;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UOakActionAbilityAugmentSlotData> RightHardPointSlot;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UOakActionAbilityAugmentData_IronBear> GunnersNestAugment;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FIronBearHardPointAugmentInfo> Hardpoints;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGbxSkeletalMeshComponent* MainMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGbxSkeletalMeshComponent* LeftHardPointMeshComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGbxSkeletalMeshComponent* RightHardPointMeshComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGbxSkeletalMeshComponent* GunnersNestMeshComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FHardPointSlotSettings RightHardPointSlotSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FHardPointSlotSettings LeftHardPointSlotSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction_CoordinatedEffect> GenericEquippedCE;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOnlyPlayInitialHardPointFlourishOnLeftSlot;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBetweenInitialHardPointFlourishAnimations;
    
    UPROPERTY(Transient)
    UOakActionAbilityAugmentData* LastSlottedLeftHardPoint;
    
    UPROPERTY(Transient)
    UOakActionAbilityAugmentData* LastSlottedRightHardPoint;
    
public:
    AStandInAuxiliaryActor_IronBear();
};

