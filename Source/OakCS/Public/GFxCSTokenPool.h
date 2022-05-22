#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCSTokenPool.generated.h"

class UGFxCSTokenTile;
class UGFxCSGridTile;

UCLASS(NonTransient)
class OAKCS_API UGFxCSTokenPool : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* TokenPoolMask;
    
    UPROPERTY(Transient)
    TArray<UGFxCSTokenTile*> TokenTiles;
    
    UPROPERTY(Transient)
    TArray<UGFxCSGridTile*> GridTiles;
    
public:
    UGFxCSTokenPool();
};

