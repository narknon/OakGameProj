#pragma once
#include "CoreMinimal.h"
#include "GbxComboBoxItemInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxComboBoxItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    int32 ReferenceIndex;
    
    FGbxComboBoxItemInfo();
};

