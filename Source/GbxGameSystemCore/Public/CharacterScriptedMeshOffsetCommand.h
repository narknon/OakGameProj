#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "CharacterScriptedMeshOffsetCommand.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FCharacterScriptedMeshOffsetCommand {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimSequence* RootMotionSourceAnim;
    
    UPROPERTY()
    FRuntimeFloatCurve HorzCurv;
    
    UPROPERTY()
    FRuntimeFloatCurve VertCurv;
    
    GBXGAMESYSTEMCORE_API FCharacterScriptedMeshOffsetCommand();
};

