#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuData.h"
#include "GFxBehindTheScenesMenuData.generated.h"

class UBehindTheScenesContent;

UCLASS()
class OAKGAME_API UGFxBehindTheScenesMenuData : public UGbxGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UBehindTheScenesContent* BehindTheScenesContent;
    
    UGFxBehindTheScenesMenuData();
};

