#pragma once
#include "CoreMinimal.h"
#include "TargetLocationBoundsSettings.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FTargetLocationBoundsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BoundsRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BoundsHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBoundsHalfHeight;
    
    FTargetLocationBoundsSettings();
};

