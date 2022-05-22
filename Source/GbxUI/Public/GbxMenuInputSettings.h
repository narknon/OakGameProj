#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxMenuKeyRepeatInfo.h"
#include "GbxMenuInputAction.h"
#include "GbxMenuInputAxisAction.h"
#include "GbxMenuInputSettings.generated.h"

UCLASS(DefaultConfig, Config=GbxUI)
class GBXUI_API UGbxMenuInputSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, Transient)
    FGbxMenuKeyRepeatInfo KeyRepeatConfig;
    
    UPROPERTY(Config, EditAnywhere, Transient)
    float AxisAsButtonThreshold;
    
    UPROPERTY(Config, EditAnywhere, Transient)
    float AxisThreshold;
    
    UPROPERTY(Config, EditAnywhere, Transient)
    TArray<FGbxMenuInputAction> ActionMappings;
    
    UPROPERTY(Config, EditAnywhere, Transient)
    TArray<FGbxMenuInputAxisAction> AxisMappings;
    
    UGbxMenuInputSettings();
};

