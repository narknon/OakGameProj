#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ArticulatedRigidBodyState.generated.h"

USTRUCT(BlueprintType)
struct FArticulatedRigidBodyState : public FRigidBodyState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BodyName;
    
    GBXGAMESYSTEMCORE_API FArticulatedRigidBodyState();
};

