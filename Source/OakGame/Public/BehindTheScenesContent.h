#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "BehindTheScenesCategory.h"
#include "BehindTheScenesContent.generated.h"

UCLASS()
class UBehindTheScenesContent : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBehindTheScenesCategory> Categories;
    
    UBehindTheScenesContent();
};

