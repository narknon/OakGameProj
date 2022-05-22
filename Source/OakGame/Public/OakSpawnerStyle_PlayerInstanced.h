#pragma once
#include "CoreMinimal.h"
#include "SpawnerStyle.h"
#include "OakSpawnerStyle_PlayerInstanced.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API UOakSpawnerStyle_PlayerInstanced : public USpawnerStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    USpawnerStyle* SpawnerStyle;
    
public:
    UOakSpawnerStyle_PlayerInstanced();
};

