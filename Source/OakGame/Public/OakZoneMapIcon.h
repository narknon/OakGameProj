#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "OakZoneMapIcon.generated.h"

class UMapIconAnchor;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UOakZoneMapIcon : public UGbxGFxButton {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UMapIconAnchor* OwningAnchor;
    
    UPROPERTY(Transient)
    UGbxGFxObject* OwningContainer;
    
    UOakZoneMapIcon();
};

