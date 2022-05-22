#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "MinimalStaticRigidBodyState.generated.h"

USTRUCT(BlueprintType)
struct FMinimalStaticRigidBodyState {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 BoneIndex;
    
    UPROPERTY()
    FVector_NetQuantize100 Position;
    
    UPROPERTY()
    FRotator Rotation;
    
    GBXGAMESYSTEMCORE_API FMinimalStaticRigidBodyState();
};

