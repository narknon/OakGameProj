#pragma once
#include "CoreMinimal.h"
#include "GbxDialogBoxChoiceInfo.h"
#include "GbxDialogBoxOnChoiceMadeDelegate.h"
#include "GbxDialogBoxInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxDialogBoxInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite)
    FText BodyText;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FGbxDialogBoxChoiceInfo> Choices;
    
    UPROPERTY(BlueprintReadWrite)
    bool bCanCancel;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAnyUserCanInteract;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxDialogBoxOnChoiceMade OnChoiceMadeDelegate;
    
    UPROPERTY(BlueprintReadWrite)
    FName TemplateNameId;
    
    FGbxDialogBoxInfo();
};

