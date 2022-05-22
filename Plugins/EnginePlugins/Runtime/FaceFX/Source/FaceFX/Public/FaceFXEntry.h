#pragma once
#include "CoreMinimal.h"
#include "FaceFXEntry.generated.h"

class USkeletalMeshComponent;
class UFaceFXAudioComponent;
class UFaceFXActor;
class UFaceFXCharacter;

USTRUCT(BlueprintType)
struct FACEFX_API FFaceFXEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    USkeletalMeshComponent* SkelMeshComp;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UFaceFXAudioComponent* AudioComp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UFaceFXActor> Asset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UFaceFXCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsAutoPlaySound: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsDisableMorphTargets: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bHasBonesFromMultipleSkeletons: 1;
    
    FFaceFXEntry();
};

