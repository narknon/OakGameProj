#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LogitechARXConfig.generated.h"

UCLASS()
class ULogitechARXConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString BasePathToAssets;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString IndexFile;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FText AppletTitle;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FText AppletFriendlyName;
    
    ULogitechARXConfig();
};

