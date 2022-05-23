#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GFxColorPickerSwatch.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxColorPickerSwatch : public UGbxGFxButton {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bIsSplit;
    
private:
    UPROPERTY(Transient)
    UGbxGFxObject* ColorSquare;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ColorSquareSplit;
    
    UPROPERTY(Transient)
    bool bIsPickingForThis;
    
    UPROPERTY(Transient)
    int32 AssignedColorListIndex;
    
    UPROPERTY(Transient)
    int32 AssignedSplitColorListIndex;
    
public:
    UGFxColorPickerSwatch();
};

