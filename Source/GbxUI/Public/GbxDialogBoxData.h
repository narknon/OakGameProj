#pragma once
#include "CoreMinimal.h"
#include "GbxDialogBoxInfo.h"
#include "GbxUmgMenuData.h"
#include "GbxDialogBoxTemplateMapItem.h"
#include "GbxDialogBoxData.generated.h"

UCLASS()
class GBXUI_API UGbxDialogBoxData : public UGbxUmgMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGbxDialogBoxInfo DialogInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGbxDialogBoxTemplateMapItem> Templates;
    
    UGbxDialogBoxData();
};

