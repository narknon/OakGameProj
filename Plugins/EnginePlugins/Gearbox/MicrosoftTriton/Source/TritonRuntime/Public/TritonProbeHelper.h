#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TritonProbeHelper.generated.h"

UCLASS()
class ATritonProbeHelper : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DistanceLimit;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bRecording;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FVector> RecordedLocations;
    
    ATritonProbeHelper();
};

