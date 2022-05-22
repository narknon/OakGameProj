#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DiscoveryIOData.generated.h"

class UDownloadableExpansionData;
class AInteractiveObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FDiscoveryIOData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDownloadableExpansionData* DownloadableExpansionData;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AInteractiveObject> Class;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
public:
    FDiscoveryIOData();
};

