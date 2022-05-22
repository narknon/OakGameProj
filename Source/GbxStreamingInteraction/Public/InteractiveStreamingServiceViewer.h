#pragma once
#include "CoreMinimal.h"
#include "InteractiveStreamingServiceViewer.generated.h"

USTRUCT()
struct FInteractiveStreamingServiceViewer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ID;
    
    UPROPERTY(EditAnywhere)
    FString Name;
    
    GBXSTREAMINGINTERACTION_API FInteractiveStreamingServiceViewer();
};

