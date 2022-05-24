#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ECARPartType.h"
#include "UObject/NoExportTypes.h"
#include "OakCARVehicleUIInfo.h"
#include "OakCARVehiclePartData.generated.h"

class UInventoryData;
class UOakCARVehicleData;
class UVehiclePartData;
class UInventoryBalanceData;

UCLASS()
class OAKGAME_API UOakCARVehiclePartData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UOakCARVehicleData* PartOfVehicle;
    
    UPROPERTY(EditAnywhere)
    ECARPartType PartType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventoryData> Wheel;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventoryBalanceData> WheelBalance;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UVehiclePartData> Part;
    
    UPROPERTY(EditAnywhere)
    FOakCARVehicleUIInfo UIInfo;
    
    UPROPERTY(EditAnywhere)
    int32 SortPriority;
    
    UPROPERTY(EditAnywhere)
    FColor DefaultColor1;
    
    UPROPERTY(EditAnywhere)
    FColor DefaultColor2;
    
    UPROPERTY(EditAnywhere)
    FColor DefaultColor3;
    
    UOakCARVehiclePartData();
};

