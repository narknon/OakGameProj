#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ECARRestrictionType.h"
#include "OakCARVehicleUIInfo.h"
#include "OakCARVehicleData.generated.h"

UCLASS()
class OAKGAME_API UOakCARVehicleData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECARRestrictionType RestrictionType;
    
    UPROPERTY(EditAnywhere)
    FOakCARVehicleUIInfo UIInfo;
    
    UPROPERTY(EditAnywhere)
    bool bIsSmallVehicle;
    
    UPROPERTY(EditAnywhere)
    int32 SortPriority;
    
    UPROPERTY(EditAnywhere)
    FName StandInDefault;
    
    UPROPERTY(EditAnywhere)
    FName StandInByPart[9];
    
    UOakCARVehicleData();
};

