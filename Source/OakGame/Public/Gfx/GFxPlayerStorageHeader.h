#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxPlayerStorageHeader.generated.h"

class UGFxPlayerStorageMenu;
class UGbxGFxHintWidget;
class UGbxTextField;

UCLASS(NonTransient)
class UGFxPlayerStorageHeader : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxPlayerStorageMenu> OwnerStorageMenu;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* SortHintClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ListHeaderLabelClip;
    
    UPROPERTY(Transient)
    UGbxTextField* FilterTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ListTypeIconClip;
    
public:
    UGFxPlayerStorageHeader();
};

