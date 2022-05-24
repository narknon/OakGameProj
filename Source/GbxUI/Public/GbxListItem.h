#pragma once
#include "CoreMinimal.h"
#include "GbxListItemDelegateDelegate.h"
#include "GbxUserWidget.h"
#include "GbxListItem.generated.h"

class UGbxList;
class IGbxList;

UCLASS(EditInlineNew)
class GBXUI_API UGbxListItem : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGbxListItemDelegate OnListItemValueChanged;
    
    UPROPERTY(Transient)
    TScriptInterface<IGbxList> ListOwner;
    
    UPROPERTY(EditAnywhere)
    FName ChangedAudioEventName;
    
    UGbxListItem();
    UFUNCTION(BlueprintPure)
    int32 GetItemIndex() const;
    
};

