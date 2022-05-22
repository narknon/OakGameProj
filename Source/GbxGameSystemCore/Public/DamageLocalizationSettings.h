#pragma once
#include "CoreMinimal.h"
#include "DamageLocalizationSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FDamageLocalizationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* CriticalTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* ResistTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* ImmuneTexture;
    
    FDamageLocalizationSettings();
};

