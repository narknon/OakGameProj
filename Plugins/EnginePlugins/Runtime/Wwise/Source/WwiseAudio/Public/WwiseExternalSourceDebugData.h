#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WwiseExternalSourceDebugData.generated.h"

UCLASS()
class WWISEAUDIO_API UWwiseExternalSourceDebugData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<uint32, FString> UniqueIdToFilename;
    
    UWwiseExternalSourceDebugData();
};

