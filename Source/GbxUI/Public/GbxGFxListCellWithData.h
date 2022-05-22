#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GbxGFxListCellWithData.generated.h"

class UDataAsset;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxListCellWithData : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FName TextID;
    
    UPROPERTY(Transient)
    UDataAsset* DataAsset;
    
public:
    UGbxGFxListCellWithData();
};

