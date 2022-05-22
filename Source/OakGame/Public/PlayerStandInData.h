#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FrontendStandInSpecialAnimationData.h"
#include "GbxDataAsset.h"
#include "ExtraStandInAnimationMeshData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FrontendStandInAuxiliaryActorData.h"
#include "PlayerStandIn_ActionAbility.h"
#include "PlayerStandIn_Augment.h"
#include "PlayerStandInData.generated.h"

class AOakCharacter_StandIn;
class UGbxAnimSet;
class UAnimInstance;
class UInventoryBalanceData;

UCLASS()
class UPlayerStandInData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakCharacter_StandIn> StandInBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakCharacter_StandIn> SkillScreenStandInBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> StandInAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> FrontendAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UGbxAnimSet>> FrontendAnimSets;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxAnimSet*> CharacterSelectAnimSets;
    
    UPROPERTY(EditAnywhere)
    TArray<FExtraStandInAnimationMeshData> ExtraFrontendAnimationData;
    
    UPROPERTY(EditAnywhere)
    FFrontendStandInSpecialAnimationData FrontendSpecialAnimations[5];
    
    UPROPERTY(EditAnywhere)
    FVector CharacterSelectPositionOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator CharacterSelectRotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector CharacterCreatePositionOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator CharacterCreateRotationOffset;
    
    UPROPERTY(EditAnywhere)
    float CharacterInspectCameraHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float CharacterInspectCameraDepthOffset;
    
    UPROPERTY(EditAnywhere)
    float PrimaryLobbyStandInCameraHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float PrimaryLobbyStandInCameraDepthOffset;
    
    UPROPERTY(EditAnywhere)
    float DelayBeforeMainMenuFlourishAnimation;
    
    UPROPERTY(EditAnywhere)
    TArray<FFrontendStandInAuxiliaryActorData> CharacterCreateAuxiliaryActors;
    
    UPROPERTY(EditAnywhere)
    FFrontendStandInAuxiliaryActorData DefaultAuxiliaryActor;
    
    UPROPERTY(EditAnywhere)
    TArray<FPlayerStandIn_ActionAbility> ActionAbilities;
    
    UPROPERTY(EditAnywhere)
    TArray<FPlayerStandIn_Augment> Augments;
    
    UPROPERTY(EditAnywhere)
    UInventoryBalanceData* FrontendWeaponBalanceWeaponData;
    
    UPlayerStandInData();
};

