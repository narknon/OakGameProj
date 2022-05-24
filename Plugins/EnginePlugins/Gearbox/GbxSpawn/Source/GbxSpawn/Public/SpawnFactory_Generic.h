#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorArchetypeProviderInterface -FallbackName=ActorArchetypeProviderInterface
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SpawnFactory_Generic.generated.h"

class AActor;
class UProperty;

UCLASS(CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnFactory_Generic : public USpawnFactory, public IActorArchetypeProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    AActor* ActorProperties;
    
    UPROPERTY(EditAnywhere)
    bool bUseActorProperties;
    
    UPROPERTY(EditAnywhere)
    bool bIncludeSkeletalMeshForSpawnExtent;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
private:
    UPROPERTY(EditAnywhere)
    FVector SpawnOrigin;
    
    UPROPERTY(EditAnywhere)
    FVector SpawnExtent;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSpawnSize;
    
    UPROPERTY(EditAnywhere)
    ESpawnActorCollisionHandlingMethod CollisionHandling;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCollisionHandling;
    
    UPROPERTY()
    TArray<FSoftObjectPath> ActorPropertyAssetRefCache;
    
public:
    USpawnFactory_Generic();
private:
    UFUNCTION()
    static bool ShouldSkipActorProperty(UProperty* ActorProperty);
    
    
    // Fix for true pure virtual functions not being implemented
};

