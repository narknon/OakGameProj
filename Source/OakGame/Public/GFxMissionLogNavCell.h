#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "EGFxMissionLogNavType.h"
#include "GFxMissionLogNavCell.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxMissionLogNavCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EGFxMissionLogNavType NavType;
    
    UGFxMissionLogNavCell();
};

