#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "MeleeWeaponAttachmentData.h"
#include "StandInCharacterComponent.generated.h"

class UGbxAction;
class AActor;
class AOakCharacter_StandIn;
class UGbxDataAsset;
class AOakCharacter_Player;
class AStandInAuxiliaryActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStandInCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> SkillScreenUnlockAnimation;
    
    UPROPERTY(EditAnywhere)
    float UnlockAnimationDelay;
    
    UPROPERTY(EditAnywhere)
    float UnlockedAnimStateDelay;
    
    UPROPERTY(EditAnywhere)
    FMeleeWeaponAttachmentData MeleeWeaponAttachmentData;
    
    UPROPERTY(EditAnywhere)
    bool bShowMeleeWeaponOnCharacterCreate;
    
    UPROPERTY(EditAnywhere)
    bool bShowMeleeWeaponOnCharacterSelect;
    
    UPROPERTY(Transient)
    AOakCharacter_StandIn* Character;
    
    UPROPERTY(Transient)
    AOakCharacter_Player* OwningPlayer;
    
    UPROPERTY(Transient)
    TArray<AStandInAuxiliaryActor*> AuxiliaryActors;
    
    UPROPERTY(Transient)
    UGbxDataAsset* LastSlottedItem;
    
public:
    UStandInCharacterComponent();
    UFUNCTION()
    void OnAuxiliaryActorDestroyed(AActor* Actor);
    
};

