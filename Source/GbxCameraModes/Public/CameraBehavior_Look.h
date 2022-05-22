#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "ECameraLookSpaces.h"
#include "CameraBehaviorLookAxis.h"
#include "GbxEasingFunc.h"
#include "CameraBehavior_Look.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_Look : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECameraLookSpaces UpAxis;
    
    UPROPERTY()
    float YawSpeedScale;
    
    UPROPERTY()
    float PitchSpeedScale;
    
    UPROPERTY()
    float RollSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSnapOnStart: 1;
    
    UPROPERTY(EditAnywhere)
    FCameraBehaviorLookAxis AXIS[3];
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc FeatheringFunction;
    
    UCameraBehavior_Look();
};

