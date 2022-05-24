#pragma once
#include "CoreMinimal.h"
#include "TravelDataConditional.h"
#include "TravelStationComponentBase.h"
#include "LevelTravelOnDestinationForTextRenderChangedDelegate.h"
#include "LevelTravelStationComponent.generated.h"

class ULevelTravelStationData;
class AController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXTRAVELSTATION_API ULevelTravelStationComponent : public UTravelStationComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ULevelTravelStationData* LevelTravelData;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FTravelDataConditional> LevelTravelDataList;
    
    UPROPERTY(EditDefaultsOnly)
    float TextRenderEvalRate;
    
    UPROPERTY(BlueprintAssignable)
    FLevelTravelOnDestinationForTextRenderChanged OnDestinationForTextRenderChanged;
    
    ULevelTravelStationComponent();
    UFUNCTION(BlueprintPure)
    ULevelTravelStationData* GetLevelTravelStationData() const;
    
    UFUNCTION(BlueprintCallable)
    bool ActivateLevelTravel(AController* ActivatingController);
    
};

