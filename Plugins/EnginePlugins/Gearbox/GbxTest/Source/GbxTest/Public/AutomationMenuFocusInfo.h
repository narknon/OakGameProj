#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxButtonType.h"
#include "AutomationMenuFocusInfo.generated.h"

USTRUCT(BlueprintType)
struct FAutomationMenuFocusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName ClassName;
    
    UPROPERTY(BlueprintReadOnly)
    FName ObjectName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ObjectNum;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly)
    FString Label;
    
    UPROPERTY(BlueprintReadOnly)
    EGbxGFxButtonType ButtonType;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsButton;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsListCell;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsListItem;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsGridList;
    
    GBXTEST_API FAutomationMenuFocusInfo();
};

