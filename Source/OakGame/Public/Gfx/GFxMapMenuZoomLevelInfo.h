#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxMapMenuZoomLevelInfo.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxMapMenuZoomLevelInfo : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* LocationNameLabel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LocationIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* LocationParentNameLabel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LocationParentIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LayerIndicator;
    
public:
    UGFxMapMenuZoomLevelInfo();
};

