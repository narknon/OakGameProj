#pragma once
#include "CoreMinimal.h"
#include "InventoryData_Simple.h"
#include "DialogTimeSlotReference.h"
#include "EEchoLogDisplayCategory.h"
#include "EEchoLogBlockedStartMethod.h"
#include "EchoLogData.generated.h"

class UZoneMapData;

UCLASS()
class UEchoLogData : public UInventoryData_Simple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FDialogTimeSlotReference Dialog;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EEchoLogBlockedStartMethod BlockedStartMethod;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EEchoLogDisplayCategory DisplayCategory;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<UZoneMapData> ContainedZone;
    
    UPROPERTY(EditInstanceOnly)
    FName AreaName;
    
    UPROPERTY(EditInstanceOnly)
    bool bShouldShowInUI;
    
    UEchoLogData();
};

