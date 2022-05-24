#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuData.h"
#include "ContextualMenuInfo.h"
#include "GbxGFxContextualMenuData.generated.h"

UCLASS()
class GBXUI_API UGbxGFxContextualMenuData : public UGbxGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FContextualMenuInfo ContextualMenuInfo;
    
    UGbxGFxContextualMenuData();
};

