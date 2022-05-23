#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxControlsKeybindingItem.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxControlsKeybindingItem : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* KeybindingName;
    
    UPROPERTY(Transient)
    UGbxTextField* Glyph;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BadBindingIcon;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> LineObjects;
    
public:
    UGFxControlsKeybindingItem();
};

