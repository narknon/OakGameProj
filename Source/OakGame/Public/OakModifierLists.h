#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "OakModifierLists.generated.h"

UCLASS(DefaultConfig, Config=Game)
class OAKGAME_API UOakModifierLists : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> MayhemModeDataPaths;
    
public:
    UOakModifierLists();
};

