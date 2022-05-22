#pragma once
#include "CoreMinimal.h"
#include "PlayerClassSaveGameData.generated.h"

class UPlayerClassIdentifier;

USTRUCT(BlueprintType)
struct FPlayerClassSaveGameData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UPlayerClassIdentifier> PlayerClassPath;
    
    UPROPERTY(VisibleAnywhere)
    uint32 DlcPackageId;
    
public:
    OAKGAME_API FPlayerClassSaveGameData();
};

