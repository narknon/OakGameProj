#pragma once
#include "CoreMinimal.h"
#include "OakCharacter.h"
#include "PlayerStandInInitData.h"
#include "OakCharacter_StandIn.generated.h"

class UOakCustomizationComponent;
class UGbxSkeletalMeshComponent;
class UStandInCharacterComponent;
class UBodyWeaponHoldManagerComponent;
class UOakCustomizationData;
class UInventoryBalanceData;
class AWeapon;
class AOakCharacter_Player;
class UGbxCustomizationData;

UCLASS()
class AOakCharacter_StandIn : public AOakCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOakCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGbxSkeletalMeshComponent* HeadMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UStandInCharacterComponent* CharacterComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBodyWeaponHoldManagerComponent* WeaponHoldComponent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCustomizationData> DefaultHeadCustomization;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakCustomizationData> DefaultBodyCustomization;
    
    UPROPERTY(EditAnywhere)
    UInventoryBalanceData* StandInWeaponBalanceData;
    
    UPROPERTY(EditAnywhere)
    FName OverrideWeaponSocketName;
    
    UPROPERTY(Transient)
    UOakCustomizationData* EquippedEmote;
    
    UPROPERTY(Transient)
    FPlayerStandInInitData InitData;
    
    UPROPERTY(Transient)
    AWeapon* EquippedWeaponTemplate;
    
    UPROPERTY(Transient)
    AWeapon* Current_EquippedWeaponInstance;
    
    UPROPERTY(Transient)
    AWeapon* Pending_PutDownWeaponInstance;
    
    UPROPERTY(Transient)
    AWeapon* Pending_EquipWeaponInstance;
    
    UPROPERTY(Transient)
    AOakCharacter_Player* OwningPlayer;
    
public:
    AOakCharacter_StandIn();
private:
    UFUNCTION()
    void OnCustomizationApplied(UGbxCustomizationData* Customization);
    
};

