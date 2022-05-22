#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxMenuInputRawMousePos.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxMenuInputRawMousePos {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector2D PrevMousePos;
    
    UPROPERTY(Transient)
    FVector2D NewMousePos;
    
    UPROPERTY(Transient)
    int32 ControllerId;
    
    UPROPERTY(Transient)
    int32 IgnoreMouseMoveFrames;
    
    FGbxMenuInputRawMousePos();
};

