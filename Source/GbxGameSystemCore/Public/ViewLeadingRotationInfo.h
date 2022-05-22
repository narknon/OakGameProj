#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ViewLeadingRotationInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FViewLeadingRotationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRotator Effect;
    
    UPROPERTY(EditAnywhere)
    FVector EffectFromTranslation;
    
    UPROPERTY(EditAnywhere)
    float TiltFromRotationYaw;
    
    UPROPERTY(EditAnywhere)
    float AccelRate;
    
    UPROPERTY(EditAnywhere)
    float DecelRate;
    
    UPROPERTY(EditAnywhere)
    FRotator Max;
    
    UPROPERTY(EditAnywhere)
    FRotator Min;
    
    FViewLeadingRotationInfo();
};

