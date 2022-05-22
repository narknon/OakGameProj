#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxMixerSettings.generated.h"

UCLASS()
class GBXMIXER_API UGbxMixerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString AppClientID;
    
    UPROPERTY(Config, EditAnywhere)
    FString RequiredAuthScope;
    
    UPROPERTY(Config, EditAnywhere)
    FString MixplayProjectVersionID;
    
    UPROPERTY(Config, EditAnywhere)
    FString BackendServiceURL;
    
    UGbxMixerSettings();
};

