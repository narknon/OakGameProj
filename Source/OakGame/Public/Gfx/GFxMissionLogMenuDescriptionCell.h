#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxMissionLogMenuDescriptionCell.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class UGFxMissionLogMenuDescriptionCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* DescriptionTextClip;
    
public:
    UGFxMissionLogMenuDescriptionCell();
};

