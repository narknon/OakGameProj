#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FaceFXLocalizationData.h"
#include "FaceFXSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class FACEFX_API UFaceFXSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FFaceFXLocalizationData> FaceFXLocalizationEquivalents;
    
    UFaceFXSettings();
};

