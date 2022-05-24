#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "SingularityTargetInfo.h"
#include "Engine/EngineTypes.h"
#include "SingularityBurstInfo.h"
#include "SingularityInitializationInfo.h"
#include "SingularityComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class UParticleSystemComponent;
class AProjectile;
class UTeamComponent;
class UHitReactionTag;
class USingularityComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API USingularityComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FSingularityTargetInfo> OverlappedTargets;
    
    UPROPERTY()
    TArray<AActor*> PendingRemoveTargets;
    
    UPROPERTY()
    TArray<AActor*> IgnoreActors;
    
    UPROPERTY()
    AProjectile* OwningProjectile;
    
    UPROPERTY(Export)
    UTeamComponent* OwnerTeam;
    
    UPROPERTY(Export)
    UParticleSystemComponent* SingularityParticles;
    
    UPROPERTY()
    UHitReactionTag* PullTag;
    
public:
    USingularityComponent();
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSingularityBurst(AActor* Instigator, const FSingularityBurstInfo& SingularityInfo);
    
    UFUNCTION(BlueprintCallable)
    static USingularityComponent* CreateSingularity(AActor* Owner, float Radius, const FSingularityInitializationInfo& SingularityInfo);
    
};

