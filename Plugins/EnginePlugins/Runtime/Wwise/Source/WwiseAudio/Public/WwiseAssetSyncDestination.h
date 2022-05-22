#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "WwiseAssetSyncDestination.generated.h"

UCLASS()
class WWISEAUDIO_API UWwiseAssetSyncDestination : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FGuid WwiseObjectID;
    
    UPROPERTY(EditAnywhere)
    FString SyncPath;
    
    UWwiseAssetSyncDestination();
};

