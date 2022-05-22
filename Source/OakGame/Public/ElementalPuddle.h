#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageableInterface.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ProjectedMeshOptions.h"
#include "EPuddleState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ElementalPuddle.generated.h"

class UElementalInteractionComponent;
class AElementalInteractionManager;
class UWwiseAudioComponent;
class UObject;
class UProceduralMeshComponent;
class UElementalPuddleOverlapCollisonComponent;
class UBalanceStateComponent;
class UPrimitiveComponent;
class UElementalPuddleConfigurationData;
class UHavokNavObstacle;
class UParticleSystemComponent;
class AElementalPuddle;
class UElementalPuddleSpawnData;
class APawn;
class UElementalPuddleSimpleSpawnData;

UCLASS(Abstract)
class AElementalPuddle : public AActor, public IDamageableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AElementalInteractionManager* ElementalInteractionManager;
    
    UPROPERTY()
    FProjectedMeshOptions PuddleCollisionOptions;
    
    UPROPERTY(Export)
    UProceduralMeshComponent* PuddleCollision;
    
    UPROPERTY()
    float PuddleCollisionSurfaceArea;
    
    UPROPERTY(EditAnywhere)
    float PuddleOverlapProbeSphereRadius;
    
    UPROPERTY(Export)
    UElementalPuddleOverlapCollisonComponent* PuddleOverlapCollision;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UElementalInteractionComponent* ElementalInteraction;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBalanceStateComponent* BalanceState;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPrimitiveComponent* VisualComponent;
    
    UPROPERTY(EditAnywhere, Replicated)
    UElementalPuddleConfigurationData* ElementalPuddleConfiguration;
    
    UPROPERTY(Replicated, Transient)
    EPuddleState PuddleState;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* AudioComponent;
    
    UPROPERTY(VisibleAnywhere)
    float CurrentOpacity;
    
    UPROPERTY(VisibleAnywhere)
    float CurrentScale;
    
    UPROPERTY(VisibleAnywhere)
    FVector2D Scale2D;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorHighlights;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableRipples: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideNormalStrength: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideMovementSpeed: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RipplesStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RipplesSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RipplesSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NormalStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementSpeed;
    
    UPROPERTY(Replicated, Transient)
    bool bWasSpawned;
    
    UPROPERTY(Replicated, Transient)
    float OverrideTraceDistance;
    
    UPROPERTY(EditAnywhere, Replicated)
    float SpawnTransitionTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    float InitialOpacity;
    
    UPROPERTY(EditAnywhere, Replicated)
    float InitialScale;
    
    UPROPERTY(EditAnywhere, Replicated)
    float FullSizeOpacity;
    
    UPROPERTY(EditAnywhere, Replicated)
    float FullSizeScale;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    float CleanUpTransitionTime;
    
    UPROPERTY(EditAnywhere, Replicated)
    float CleanUpOpacity;
    
    UPROPERTY(EditAnywhere, Replicated)
    float CleanUpScale;
    
    UPROPERTY(ReplicatedUsing=OnRep_CleanUpDuration)
    float ReplicatedCleanUpDuration;
    
    UPROPERTY(Transient)
    UHavokNavObstacle* NavObstacle;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ParticleSystem;
    
public:
    AElementalPuddle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static AElementalPuddle* SpawnElementalPuddle(UObject* WorldContextObject, TSubclassOf<AElementalPuddle> PuddleClass, FTransform SpawnTransform, const UElementalPuddleConfigurationData* PuddleConfiguration, const UElementalPuddleSpawnData* PuddleSpawnData, float AutoAlignTraceDistance, AActor* SpawnOwner, float OverrideFullSizeScale, APawn* OverrideInstigator);
    
    UFUNCTION(BlueprintCallable)
    static AElementalPuddle* SimpleSpawnElementalPuddle(UObject* WorldContextObject, const UElementalPuddleSimpleSpawnData* SimpleSpawnData, FTransform SpawnTransform, AActor* SpawnOwner, APawn* OverrideInstigator);
    
protected:
    UFUNCTION()
    void OnRep_CleanUpDuration();
    
    UFUNCTION(BlueprintCallable)
    void K2_CleanUpPuddle(float CleanUpTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

