#pragma once
#include "CoreMinimal.h"
#include "AnimMeshList.h"
#include "CoverHitReactionItem.generated.h"

class UCoverStyleData;

USTRUCT(BlueprintType)
struct FCoverHitReactionItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimMeshList Anims;
    
    UPROPERTY(EditAnywhere)
    TArray<UCoverStyleData*> Styles;
    
    GBXAI_API FCoverHitReactionItem();
};

