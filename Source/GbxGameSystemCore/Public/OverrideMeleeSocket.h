#pragma once
#include "CoreMinimal.h"
#include "OverrideMeleeSocket.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FOverrideMeleeSocket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* OverrideCondition;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> OverrideSockets;
    
    GBXGAMESYSTEMCORE_API FOverrideMeleeSocket();
};

