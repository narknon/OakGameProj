#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuData.h"
#include "GbxGFxDialogBoxInfo.h"
#include "GbxGFxDialogBoxData.generated.h"

UCLASS()
class UGbxGFxDialogBoxData : public UGbxGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGbxGFxDialogBoxInfo DialogInfo;
    
    UGbxGFxDialogBoxData();
};

