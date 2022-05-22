#pragma once
#include "CoreMinimal.h"
#include "SectorFromBP.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class UWwiseAudioComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FSectorFromBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* SectorRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UStaticMeshComponent* FakeEmissiveWholeFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UWwiseAudioComponent* PropaneAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UStaticMeshComponent*> HeatingElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UStaticMeshComponent*> FakeEmissives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UStaticMeshComponent*> DamageZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UParticleSystemComponent*> Bursts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UParticleSystemComponent*> HeatHazes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UParticleSystemComponent*> Anticipations;
    
    OAKGAME_API FSectorFromBP();
};

