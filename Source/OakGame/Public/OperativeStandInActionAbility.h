#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OperativeStandInActionAbility.generated.h"

class UGbxAction;
class UOakActionAbility;
class AStandInAuxiliaryActor;

USTRUCT(BlueprintType)
struct FOperativeStandInActionAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UOakActionAbility> Ability;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> CharacterFlourishAnimation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AStandInAuxiliaryActor> AuxiliaryActor;
    
    UPROPERTY(EditAnywhere)
    FVector AuxiliaryTranslationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator AuxiliaryRotationOffset;
    
    UPROPERTY(EditAnywhere)
    float AuxiliaryScale;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> AuxiliaryFlourishAnimation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> AuxiliaryIdleAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bAttachAuxiliaryActorToCharacter;
    
    UPROPERTY(EditAnywhere)
    FName AuxiliaryAttachmentSocket;
    
    UPROPERTY(EditAnywhere)
    bool bCopyPlayerAnims;
    
    UPROPERTY(EditAnywhere)
    bool bCopyPlayerWeapon;
    
    UPROPERTY(EditAnywhere)
    float FadeInFlourishVisibleDelay;
    
    OAKGAME_API FOperativeStandInActionAbility();
};

