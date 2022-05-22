#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StreamingStatusInfo.generated.h"

USTRUCT()
struct FStreamingStatusInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText Text;
    
    UPROPERTY()
    FColor Color;
    
    UPROPERTY()
    FText Description;
    
    UPROPERTY()
    bool bIsDescriptionRelevant;
    
    OAKGAME_API FStreamingStatusInfo();
};

