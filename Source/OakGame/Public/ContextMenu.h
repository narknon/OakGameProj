#pragma once
#include "CoreMinimal.h"
#include "ContextMenuContextInfo.h"
#include "ContextMenu.generated.h"

class UGbxGFxObject;
class UGbxGFxGridScrollingList;

USTRUCT(BlueprintType)
struct FContextMenu {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* ContainerWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* MenuList;
    
    UPROPERTY(Transient)
    FContextMenuContextInfo ContextInfo;
    
private:
    UPROPERTY(Transient)
    bool bIsVisible;
    
public:
    OAKGAME_API FContextMenu();
};

