#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxTwitchSettings.generated.h"

UCLASS()
class GBXTWITCH_API UGbxTwitchSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString AppClientID;
    
    UPROPERTY(Config, EditAnywhere)
    FString AppClientID_Stable;
    
    UPROPERTY(Config, EditAnywhere)
    FString AppClientID_Cert;
    
    UPROPERTY(Config, EditAnywhere)
    FString ExtensionID;
    
    UPROPERTY(Config, EditAnywhere)
    FString GameID;
    
    UGbxTwitchSettings();
};

