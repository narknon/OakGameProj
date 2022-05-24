#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandInCharacterComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BeastmasterStandInPetData.h"
#include "BeastmasterStandInActionSkillData.h"
#include "BeastmasterStandInComponent.generated.h"

class UGbxAction;
class UPlayerCharacterComponentSlotData;
class UOakPlayerAbilitySlotData;
class UPrimitiveComponent;
class UPlayerCharacterComponentAugmentData;
class AStandInAuxiliaryActor_Pet;
class UOakActionAbility;
class AStandInAuxiliaryActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBeastmasterStandInComponent : public UStandInCharacterComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> BeastmasterSpawnPetAnimation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> PetSpawnAnimation;
    
    UPROPERTY(EditAnywhere)
    FVector PetTranslationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator PetRotationOffset;
    
    UPROPERTY(EditAnywhere)
    float InitialActionSkillFlourishDelay;
    
    UPROPERTY(EditAnywhere)
    UOakPlayerAbilitySlotData* ActionSkillSlot;
    
    UPROPERTY(EditAnywhere)
    UPlayerCharacterComponentSlotData* PetSlot;
    
    UPROPERTY(EditAnywhere)
    TArray<FBeastmasterStandInPetData> Pets;
    
    UPROPERTY(EditAnywhere)
    TArray<FBeastmasterStandInActionSkillData> ActionSkills;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* MeleeMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UPlayerCharacterComponentAugmentData* CurrentPet;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStandInAuxiliaryActor_Pet> CurrentPetActor;
    
    UPROPERTY(Transient)
    TSubclassOf<UOakActionAbility> CurrentActionAbility;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AStandInAuxiliaryActor> CurrentActionSkillAuxiliary;
    
public:
    UBeastmasterStandInComponent();
    UFUNCTION(BlueprintCallable)
    void TriggerFlourishCE();
    
    UFUNCTION(BlueprintCallable)
    void SetMeleeMeshVisible(bool bVisible);
    
};

