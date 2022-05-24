#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCARMenuCustomizePanels.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxCARMenuCustomizePanels : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* CategoryTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* UnlockedTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NewIndicatorClip;
    
public:
    UGFxCARMenuCustomizePanels();
};

