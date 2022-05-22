#pragma once
#include "CoreMinimal.h"
#include "GbxHintInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxHintInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> InputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText HelpText;
    
    UPROPERTY()
    bool bStagePlaced;
    
    UPROPERTY()
    UObject* StagePlacedWidget;
    
    UPROPERTY()
    bool bClickable;
    
    UPROPERTY()
    bool bForceRefreshText;
    
    FGbxHintInfo();
};

