#pragma once
#include "CoreMinimal.h"
#include "FaceFXLocalizationData.generated.h"

USTRUCT(BlueprintType)
struct FACEFX_API FFaceFXLocalizationData {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString GroupName;
    
    UPROPERTY(Config, EditAnywhere)
    FString ExportLanguage;
    
    FFaceFXLocalizationData();
};

