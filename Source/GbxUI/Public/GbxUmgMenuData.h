#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxMenuData.h"
#include "GbxUmgMenuData.generated.h"

class UGbxUmgMenu;
class UGbxListItemFactory;

UCLASS(BlueprintType)
class GBXUI_API UGbxUmgMenuData : public UGbxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxUmgMenu> MenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGbxListItemFactory* ListItemFactory;
    
    UGbxUmgMenuData();
};

