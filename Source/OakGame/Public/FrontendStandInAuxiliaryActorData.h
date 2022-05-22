#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FrontendStandInAuxiliaryActorData.generated.h"

class AStandInAuxiliaryActor;

USTRUCT(BlueprintType)
struct FFrontendStandInAuxiliaryActorData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AStandInAuxiliaryActor> ActorClass;
    
    UPROPERTY(EditAnywhere)
    FVector Translation;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    bool bPlayAnimations;
    
    UPROPERTY(EditAnywhere)
    bool bDigistructIn;
    
    UPROPERTY(EditAnywhere)
    float DigistructDelay;
    
    UPROPERTY(EditAnywhere)
    bool bAttachAuxiliaryActorToCharacter;
    
    UPROPERTY(EditAnywhere)
    FName AuxiliaryAttachmentSocket;
    
    UPROPERTY(EditAnywhere)
    bool bCopyPlayerWeapon;
    
    UPROPERTY(EditAnywhere)
    FVector PlayerTranslation;
    
    UPROPERTY(EditAnywhere)
    FRotator PlayerRotation;
    
    OAKGAME_API FFrontendStandInAuxiliaryActorData();
};

