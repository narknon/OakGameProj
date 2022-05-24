#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StandInAuxiliaryActor.generated.h"

class AWeapon;
class UGbxActionComponent;
class UGbxCustomizationComponent;
class USkeletalMeshComponent;
class UGbxSkeletalMeshComponent;
class UInventoryBalanceData;
class USceneComponent;
class AOakCharacter_StandIn;
class AOakCharacter_Player;

UCLASS(Transient)
class AStandInAuxiliaryActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGbxActionComponent* ActionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGbxCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* MeshComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxSkeletalMeshComponent* HeadMeshReference;
    
    UPROPERTY(Export, Transient)
    USceneComponent* CachedHeadMeshParent;
    
    UPROPERTY(EditAnywhere)
    bool bWantsFadeInCoordinatedEffects;
    
    UPROPERTY(EditAnywhere)
    UInventoryBalanceData* EquippedWeaponData;
    
    UPROPERTY(EditAnywhere)
    FName EquippedWeaponSocket;
    
    UPROPERTY(EditAnywhere)
    float EquippedWeaponScale;
    
private:
    UPROPERTY(Transient)
    AWeapon* EquippedWeaponInstance;
    
public:
    AStandInAuxiliaryActor();
    UFUNCTION(BlueprintCallable)
    void SetHidden(bool bNewHidden, FName Reason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReceivedClonedWeaponAppearance(USceneComponent* BaseComponent);
    
    UFUNCTION(BlueprintPure)
    AOakCharacter_StandIn* GetOwningStandIn() const;
    
    UFUNCTION(BlueprintPure)
    AOakCharacter_Player* GetOwningPlayer() const;
    
};

