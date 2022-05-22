#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StretchBonesInstance.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FStretchBonesInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName StartBoneName;
    
    UPROPERTY(BlueprintReadWrite)
    FName EndBoneName;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUniformStretch;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadOnly)
    FVector TargetPosition;
    
    UPROPERTY(BlueprintReadOnly)
    float Distance;
    
    FStretchBonesInstance();
};

