#pragma once
#include "CoreMinimal.h"
#include "EGbxOffsetType.h"
#include "UObject/NoExportTypes.h"
#include "GbxNavGoalModifiers.generated.h"

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxNavGoalModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGbxOffsetType OffsetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAddAgentRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAddAgentHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAddGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAddGoalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAdjustHeightForMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCenterOnFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalFlyOffset;
    
    FGbxNavGoalModifiers();
};

