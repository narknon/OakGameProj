#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDialogBoxTemplateMapItem.generated.h"

class UGbxDialogBox;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxDialogBoxTemplateMapItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName NameId;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDialogBox> DialogClass;
    
    FGbxDialogBoxTemplateMapItem();
};

