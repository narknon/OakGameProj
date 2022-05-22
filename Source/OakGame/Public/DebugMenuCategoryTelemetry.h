#pragma once
#include "CoreMinimal.h"
#include "GbxDebugMenuSubmenu.h"
#include "DebugMenuCategoryTelemetry.generated.h"

class UDebugMenuCategoryList;
class UTextBlock;

UCLASS(EditInlineNew)
class UDebugMenuCategoryTelemetry : public UGbxDebugMenuSubmenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UDebugMenuCategoryList* CategoryList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextExecutionGUID;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextReportTag;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextGameGUID;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextKeys;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TextValues;
    
    UDebugMenuCategoryTelemetry();
};

