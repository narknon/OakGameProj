#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ViewLeadingTranslationInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FViewLeadingTranslationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Effect;
    
    UPROPERTY(EditAnywhere)
    float AccelRate;
    
    UPROPERTY(EditAnywhere)
    float DecelRate;
    
    UPROPERTY(EditAnywhere)
    FVector Max;
    
    UPROPERTY(EditAnywhere)
    FVector Min;
    
    FViewLeadingTranslationInfo();
};

