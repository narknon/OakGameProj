#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "GrenadeLingeringBeamTriggerComponent.generated.h"

class UGbxDamageType;
class AActor;
class ULightBeamData;
class UPrimitiveComponent;
class UDamageSource;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UGrenadeLingeringBeamTriggerComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<AActor*> OverlappedActors;
    
    UPROPERTY()
    TSubclassOf<ULightBeamData> BeamData;
    
    UPROPERTY()
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY()
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY()
    TArray<AActor*> RemovedOverlappedActors;
    
public:
    UGrenadeLingeringBeamTriggerComponent();
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

