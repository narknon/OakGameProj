#pragma once
#include "CoreMinimal.h"
#include "EGFxItemInspectionPages.h"
#include "GFxItemInspectionPageData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionPageData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGFxItemInspectionPages Page;
    
    UPROPERTY(EditAnywhere)
    FName NavId;
    
    UPROPERTY(EditAnywhere)
    FString FrameName;
    
    UPROPERTY(EditAnywhere)
    FText PageTitle;
    
    FGFxItemInspectionPageData();
};

