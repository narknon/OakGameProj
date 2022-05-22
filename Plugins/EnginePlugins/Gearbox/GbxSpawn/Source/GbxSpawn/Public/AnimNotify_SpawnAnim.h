#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESpawnAnimNotifyAction.h"
#include "AnimNotify_SpawnAnim.generated.h"

UCLASS(CollapseCategories)
class GBXSPAWN_API UAnimNotify_SpawnAnim : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ESpawnAnimNotifyAction Action;
    
public:
    UAnimNotify_SpawnAnim();
};

