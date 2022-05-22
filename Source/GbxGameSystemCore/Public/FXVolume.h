#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "Engine/EngineTypes.h"
#include "FXVolume.generated.h"

class UParticleSystem;
class UPrimitiveComponent;
class AActor;

UCLASS()
class GBXGAMESYSTEMCORE_API AFXVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(EditAnywhere)
    float ParticleDepth;
    
    UPROPERTY(EditAnywhere)
    FName TagName;
    
    UPROPERTY(EditAnywhere)
    bool bDepthPriorityWorld;
    
    AFXVolume();
    UFUNCTION()
    void OnActorLeftVolume(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnActorEnteredVolume(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
};

