#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "UObject/NoExportTypes.h"
#include "GbxAnimNode_Print.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIME_API FGbxAnimNode_Print : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString inString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPrintToLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPrintToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    FGbxAnimNode_Print();
};

