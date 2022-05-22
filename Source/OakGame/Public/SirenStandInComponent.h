#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandInCharacterComponent.h"
#include "SirenStandInFlourish.h"
#include "SirenStandInComponent.generated.h"

class UOakActionAbilityAugmentData;
class AStandInAuxiliaryActor_Siren;
class UGbxAction;
class UGbxCustomizationData;
class UGbxSkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USirenStandInComponent : public UStandInCharacterComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FSirenStandInFlourish> SkillFlourishes;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> EndingAnimation;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UGbxSkeletalMeshComponent* GhostArmsComponent;
    
    UPROPERTY(EditAnywhere)
    bool bShowArmsOnCharacterCreate;
    
    UPROPERTY(EditAnywhere)
    bool bShowArmsOnCharacterSelect;
    
private:
    UPROPERTY(Transient)
    AStandInAuxiliaryActor_Siren* CurrentFlourishAuxiliaryActor;
    
    UPROPERTY(Transient)
    UOakActionAbilityAugmentData* CurrentSlottedPrimaryAugment;
    
public:
    USirenStandInComponent();
    UFUNCTION(BlueprintCallable)
    void SetGhostArmsVisible(bool bNewVisible);
    
protected:
    UFUNCTION()
    void OnCustomizationApplied(UGbxCustomizationData* Customization);
    
};

