#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/PrimitiveComponent.h"
#include "ESpawnPointFilter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HavokNavSeed -FallbackName=HavokNavSeed
#include "SpawnPointComponentEventDelegate.h"
#include "ESpawnStretchType.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "GbxTriggerProperty.h"
#include "SpawnPointComponent.generated.h"

class ASpawnPoint;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXSPAWN_API USpawnPointComponent : public UPrimitiveComponent, public IHavokNavSeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnPointComponentEvent OnActorSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnPointComponentEvent OnActorDied;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnPointComponentEvent OnSpawnAnimComplete;
    
private:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(Transient)
    ASpawnPoint* SpawnPoint;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag SpawnAITreeTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag SpawnAction;
    
    UPROPERTY(EditAnywhere)
    ESpawnStretchType SpawnStretchType;
    
    UPROPERTY(EditDefaultsOnly)
    float TraceToGroundDistance;
    
    UPROPERTY()
    bool bStretchOrient;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer Tags;
    
    UPROPERTY(EditAnywhere)
    ESpawnPointFilter FilterMatchType;
    
    UPROPERTY()
    bool bFilterByTags;
    
    UPROPERTY()
    EGameplayContainerMatchType TagMatchType;
    
    UPROPERTY()
    FTransform StretchyPoint;
    
    UPROPERTY(EditAnywhere)
    FGbxTriggerProperty ResetStretch;
    
    UPROPERTY(EditAnywhere)
    bool bAttachSpawnedActors;
    
    UPROPERTY(EditAnywhere)
    FName AttachSlotName;
    
public:
    USpawnPointComponent();
    UFUNCTION(BlueprintCallable)
    void SetSpawnStyleTag(FGameplayTag NewTag);
    
    UFUNCTION(BlueprintCallable)
    void ResetStretchPoint();
    
    UFUNCTION(BlueprintPure)
    bool HasSpawnAITreeTag() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetStretchyPoint() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetSpawnStyleTag() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetSpawnAITreeTag() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSpawnPoint();
    
    UFUNCTION(BlueprintCallable)
    void DisableSpawnPoint();
    
    
    // Fix for true pure virtual functions not being implemented
};

