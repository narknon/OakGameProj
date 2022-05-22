#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityHUDItemValue.h"
#include "Engine/NetSerialization.h"
#include "OakPlayerAbilityHUDItem.generated.h"

class UOakPlayerAbilityHUDItemValueProviderInterface;
class IOakPlayerAbilityHUDItemValueProviderInterface;
class UOakPlayerAbilityHUDItemData;

USTRUCT(BlueprintType)
struct FOakPlayerAbilityHUDItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(NotReplicated)
    TScriptInterface<IOakPlayerAbilityHUDItemValueProviderInterface> Provider;
    
    UPROPERTY()
    UOakPlayerAbilityHUDItemData* HUDItemData;
    
    UPROPERTY()
    FOakPlayerAbilityHUDItemValue Value;
    
public:
    OAKGAME_API FOakPlayerAbilityHUDItem();
};

