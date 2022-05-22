#pragma once
#include "CoreMinimal.h"
#include "GbxEasingFunc.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ViewModelOffsetImpulseInfo.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FViewModelOffsetImpulseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float EaseInDuration;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc EaseInFunc;
    
    UPROPERTY(EditAnywhere)
    float EaseOutDuration;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc EaseOutFunc;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationExtent;
    
    UPROPERTY(EditAnywhere)
    FVector TranslationExtent;
    
    FViewModelOffsetImpulseInfo();
};

