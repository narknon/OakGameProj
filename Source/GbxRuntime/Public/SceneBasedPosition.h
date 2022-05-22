#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SceneBasedPosition.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct GBXRUNTIME_API FSceneBasedPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY()
    FVector CachedBaseLocation;
    
    UPROPERTY()
    FRotator CachedBaseRotation;
    
    UPROPERTY()
    FVector CachedTransPosition;
    
    FSceneBasedPosition();
};

