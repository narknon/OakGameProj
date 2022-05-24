#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFxCARMenuLoadAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FGFxCARMenuLoadAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FSoftObjectPath StringAssetRef;
    
    OAKGAME_API FGFxCARMenuLoadAssetInfo();
};

