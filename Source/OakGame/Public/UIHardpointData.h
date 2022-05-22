#pragma once
#include "CoreMinimal.h"
#include "EIronBearUIHardpointType.h"
#include "UIHardpointData.generated.h"

USTRUCT(BlueprintType)
struct FUIHardpointData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    EIronBearUIHardpointType Type;
    
    UPROPERTY(EditAnywhere)
    FString ProgressBarName;
    
    UPROPERTY(EditAnywhere)
    FString ProgressBarFrameName;
    
    UPROPERTY(EditAnywhere)
    FString IconFrameName;
    
    UPROPERTY(EditAnywhere)
    FString ElementalIconName;
    
    UPROPERTY(EditAnywhere)
    FString FallbackElementalIconFrameName;
    
    UPROPERTY(EditDefaultsOnly)
    FText BarText;
    
    OAKGAME_API FUIHardpointData();
};

