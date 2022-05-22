#pragma once
#include "CoreMinimal.h"
#include "AIAction_UseCover.h"
#include "GbxParam.h"
#include "UObject/NoExportTypes.h"
#include "AIAction_SimpleCover.generated.h"

class UEnvQueryTestAsset;

UCLASS(CollapseCategories, EditInlineNew, Config=Game)
class GBXAI_API UAIAction_SimpleCover : public UAIAction_UseCover {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bTakeRangesFromWeapon;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MinRange;
    
    UPROPERTY(EditAnywhere)
    FGbxParam IdealRange;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MaxRange;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnvQueryTestAsset*> AdditionalTests;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultEnvQuery;
    
    UPROPERTY()
    uint8 SimpleCoverVersion;
    
public:
    UAIAction_SimpleCover();
};

