#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCrewQaurtersPlaceObjectsBackpackObject.generated.h"

class UGbxTextField;
class UGbxGFxHintWidget;

UCLASS(NonTransient)
class OAKGAME_API UGFxCrewQaurtersPlaceObjectsBackpackObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* HeaderTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* FilterTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* SortTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* SortButtonLeftClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* SortButtonRightClip;
    
public:
    UGFxCrewQaurtersPlaceObjectsBackpackObject();
};

