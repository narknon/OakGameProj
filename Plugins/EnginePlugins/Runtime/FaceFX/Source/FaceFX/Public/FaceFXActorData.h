#pragma once
#include "CoreMinimal.h"
#include "FaceFXIdData.h"
#include "FaceFXActorData.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXActorData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> ActorRawData;
    
    UPROPERTY()
    TArray<uint8> BonesRawData;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FFaceFXIdData> Ids;
    
    FACEFX_API FFaceFXActorData();
};

