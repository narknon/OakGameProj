#pragma once
#include "CoreMinimal.h"
#include "GbxDebugMenuSubmenu.h"
#include "DebugMenuCategoryEssentials.generated.h"

class UDebugMenuCategoryList;

UCLASS(EditInlineNew)
class UDebugMenuCategoryEssentials : public UGbxDebugMenuSubmenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UDebugMenuCategoryList* CategoryList;
    
    UDebugMenuCategoryEssentials();
};

