#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "MissionGraph.generated.h"

class UMission;
class UDownloadableContentData;

UCLASS()
class GBXMISSION_API UMissionGraph : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 GraphPriorityID;
    
    UPROPERTY(EditAnywhere)
    FText GraphDisplayName;
    
    UPROPERTY(VisibleAnywhere)
    bool bShowReferencedMissionDummy;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UMission>> ReferencedMissions;
    
    UPROPERTY(EditAnywhere)
    UDownloadableContentData* DLCExpansionData;
    
    UMissionGraph();
};

