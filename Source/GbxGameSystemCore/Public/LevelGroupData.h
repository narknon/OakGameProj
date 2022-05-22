#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "LevelGroupData.generated.h"

class ULevelData;

UCLASS(Abstract, BlueprintType)
class GBXGAMESYSTEMCORE_API ULevelGroupData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SubHeader;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    TArray<TSoftObjectPtr<ULevelData>> ContainedLevels;
    
    ULevelGroupData();
};

