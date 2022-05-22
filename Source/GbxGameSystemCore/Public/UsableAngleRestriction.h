#pragma once
#include "CoreMinimal.h"
#include "UsableAngleRestriction.generated.h"

USTRUCT(BlueprintType)
struct FUsableAngleRestriction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngleWidth;
    
    GBXGAMESYSTEMCORE_API FUsableAngleRestriction();
};

