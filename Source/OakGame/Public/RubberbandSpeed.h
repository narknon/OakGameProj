#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "RubberbandSpeed.generated.h"

USTRUCT(BlueprintType)
struct FRubberbandSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector RubberbandTargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam MinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBehindOnly;
    
    OAKGAME_API FRubberbandSpeed();
};

