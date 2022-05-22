#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxBlackboardKeySelector.h"
#include "UObject/NoExportTypes.h"
#include "AIAspectSettings_Leap.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Leap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGbxAction> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnglePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDoNavigationTest;
    
    UPROPERTY(EditAnywhere)
    bool bDoCollisionTest;
    
    UPROPERTY(EditAnywhere)
    bool bAddTargetRadius;
    
    UPROPERTY(EditAnywhere)
    float UseExactLocationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TestPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanStartWhileFalling;
    
    FAIAspectSettings_Leap();
};

