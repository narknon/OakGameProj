#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ExternalGraphLevelLinks.h"
#include "TravelGraph.generated.h"

class UTravelStationData;
class ULevelGroupData;
class ULevelData;
class UDownloadableContentData;

UCLASS()
class GBXTRAVELSTATION_API UTravelGraph : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UTravelStationData* InitialStation;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<UTravelStationData>> ReferencedTravelStations;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<ULevelData>> ReferencedLevels;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<ULevelGroupData>> ReferencedLevelGroups;
    
    UPROPERTY(EditAnywhere)
    FText GraphDisplayName;
    
    UPROPERTY(EditAnywhere)
    UDownloadableContentData* DLCExpansionData;
    
    UPROPERTY(EditAnywhere)
    TArray<FExternalGraphLevelLinks> ExternalLinksToOtherLevel;
    
    UTravelGraph();
};

