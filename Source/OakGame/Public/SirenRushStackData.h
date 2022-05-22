#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SirenRushStackData.generated.h"

UCLASS()
class OAKGAME_API USirenRushStackData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName StackName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Count;
    
public:
    USirenRushStackData();
};

