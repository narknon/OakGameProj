#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxDataAsset.h"
#include "RuntimeActorPartListData.h"
#include "ActorPartSelectionData.generated.h"

class UActorPartSelectionData;
class UActorPartSetData;

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API UActorPartSelectionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UActorPartSelectionData* BaseSelectionData;
    
    UPROPERTY(EditAnywhere)
    UActorPartSetData* PartSetData;
    
    UPROPERTY()
    FGuid PartSetDataGuid;
    
    UPROPERTY()
    FRuntimeActorPartListData RuntimePartList;
    
    UPROPERTY()
    FGuid RuntimePartListGuid;
    
    UPROPERTY()
    FGuid InheritedRuntimePartListGuid;
    
public:
    UActorPartSelectionData();
};

