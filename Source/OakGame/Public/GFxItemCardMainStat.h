#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxItemCardMainStat.generated.h"

UCLASS(NonTransient)
class UGFxItemCardMainStat : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FString PreviousRarityFrame;
    
public:
    UGFxItemCardMainStat();
};

