#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxSocialWidgetCell.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxSocialWidgetCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* TextClip;
    
public:
    UGFxSocialWidgetCell();
};

