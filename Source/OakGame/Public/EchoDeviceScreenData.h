#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EchoDeviceScreenData.generated.h"

class UMaterialInstance;
class UWwiseEvent;

USTRUCT()
struct FEchoDeviceScreenData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInstance* MaterialInstance;
    
    UPROPERTY(EditAnywhere)
    float Rate;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* Sound;
    
    UPROPERTY(EditAnywhere)
    FName NextScreenName;
    
    OAKGAME_API FEchoDeviceScreenData();
};

