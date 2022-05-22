#pragma once
#include "CoreMinimal.h"
#include "GeyserAlwaysOnData.h"
#include "UObject/NoExportTypes.h"
#include "GeyserIntermittentData.generated.h"

UCLASS()
class UGeyserIntermittentData : public UGeyserAlwaysOnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D MinMaxStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnticipationOnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PostAnticipationOffTime;
    
    UGeyserIntermittentData();
};

