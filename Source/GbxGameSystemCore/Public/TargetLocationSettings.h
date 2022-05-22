#pragma once
#include "CoreMinimal.h"
#include "TargetLocationBoundsSettings.h"
#include "GbxParam.h"
#include "TargetLocationSettings.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FTargetLocationSettings : public FTargetLocationBoundsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Socket;
    
    FTargetLocationSettings();
};

