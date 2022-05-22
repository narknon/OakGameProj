#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GbxInputRebindCategory.generated.h"

class UGbxInputRebindCategory;
class UGbxInputRebindContext;

UCLASS()
class GBXINPUT_API UGbxInputRebindCategory : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FText CategoryName;
    
    UPROPERTY(EditDefaultsOnly)
    FText CategoryDescription;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxInputRebindCategory* ParentCategory;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxInputRebindContext* DefaultContext;
    
public:
    UGbxInputRebindCategory();
};

