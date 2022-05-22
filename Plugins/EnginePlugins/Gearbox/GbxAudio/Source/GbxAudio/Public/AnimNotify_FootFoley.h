#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Foley.h"
#include "AnimNotify_FootFoley.generated.h"

UCLASS(CollapseCategories)
class GBXAUDIO_API UAnimNotify_FootFoley : public UAnimNotify_Foley {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 FootIndex;
    
    UAnimNotify_FootFoley();
};

