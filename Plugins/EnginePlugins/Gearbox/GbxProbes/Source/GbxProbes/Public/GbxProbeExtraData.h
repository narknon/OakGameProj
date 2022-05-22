#pragma once
#include "CoreMinimal.h"
#include "GbxProbeExtraData.generated.h"

USTRUCT(BlueprintType)
struct FGbxProbeExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    GBXPROBES_API FGbxProbeExtraData();
};

