#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "LevelData.generated.h"

class ULevelGroupData;
class ULevelData;
class UDownloadableContentData;

UCLASS(Abstract, BlueprintType)
class GBXGAMESYSTEMCORE_API ULevelData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SubHeader;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName LevelMapName;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<ULevelData>> LinksToOtherLevel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<ULevelGroupData> OwningLevelGroup;
    
    UPROPERTY(Transient)
    UDownloadableContentData* DLCExpansionData;
    
    ULevelData();
};

