#pragma once
#include "CoreMinimal.h"
#include "TravelLocationData.h"
#include "TravelStationData.generated.h"

class UGbxCondition;
class UTravelStationData;
class ULevelData;
class UGbxUIName;

UCLASS(Abstract, BlueprintType)
class GBXTRAVELSTATION_API UTravelStationData : public UTravelLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FName StationMapName;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UGbxCondition*> Dependencies;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    TSoftObjectPtr<UTravelStationData> PreviousStation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    TSoftObjectPtr<ULevelData> OwningLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGbxUIName* DisplayUIName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGbxUIName* DescriptionUI;
    
    UTravelStationData();
    UFUNCTION(BlueprintPure)
    FName GetStationMapName() const;
    
};

