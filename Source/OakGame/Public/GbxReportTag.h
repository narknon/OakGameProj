#pragma once
#include "CoreMinimal.h"
#include "GbxReportTag.generated.h"

USTRUCT(BlueprintType)
struct FGbxReportTag {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bShowInMenu;
    
    UPROPERTY()
    FString Tag;
    
    UPROPERTY()
    FText Description;
    
    OAKGAME_API FGbxReportTag();
};

