#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxNavStreamingData.generated.h"

class UHavokStreamingSet;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxNavStreamingData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    TArray<UHavokStreamingSet*> Sets;
    
public:
    FGbxNavStreamingData();
};

