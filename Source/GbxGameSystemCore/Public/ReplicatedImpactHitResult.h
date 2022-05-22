#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedImpactHitResult.generated.h"

class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FReplicatedImpactHitResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bLocalSpace;
    
    UPROPERTY()
    FVector_NetQuantize ImpactPoint;
    
    UPROPERTY()
    FVector_NetQuantizeNormal Normal;
    
    UPROPERTY()
    TWeakObjectPtr<UPhysicalMaterial> PhysMaterial;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY()
    FName BoneName;
    
    FReplicatedImpactHitResult();
};

