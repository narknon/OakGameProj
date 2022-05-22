#pragma once
#include "CoreMinimal.h"
#include "EContextualMenuEntryType.h"
#include "GbxGFxContextualMenuLocTableData.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxContextualMenuLocTableData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EContextualMenuEntryType Type;
    
    UPROPERTY(EditAnywhere)
    FText ItemText;
    
    UPROPERTY(EditAnywhere)
    FString FrameString;
    
    FGbxGFxContextualMenuLocTableData();
};

