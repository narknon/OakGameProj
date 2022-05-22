#pragma once
#include "CoreMinimal.h"
#include "EItemDropOnDeathType.h"
#include "SpawnFactory_Oak.h"
#include "ItemPoolCollection.h"
#include "SpawnFactorKeyedAction.h"
#include "SpawnFactory_OakAI.generated.h"

class UItemPoolListInterface;
class UGestaltPartListData;
class UGbxUIName;
class UDialogNameTag;
class AOakCharacter;
class UTeam;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_OakAI : public USpawnFactory_Oak {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AOakCharacter> AIActorClass;
    
    UPROPERTY(EditAnywhere)
    UItemPoolListInterface* ItemPoolToDropOnDeath;
    
    UPROPERTY(EditAnywhere)
    bool ItemPoolToDropOnDeathAdditive;
    
    UPROPERTY(EditAnywhere)
    EItemDropOnDeathType ItemPoolDropOnDeathType;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideEquippedItems;
    
    UPROPERTY()
    FItemPoolCollection CustomItemCollectionToEquip;
    
    UPROPERTY(EditAnywhere)
    TArray<FItemPoolCollection> CustomItemCollectionsToEquip;
    
    UPROPERTY(EditAnywhere)
    bool bEquipSingleItemFromCollection;
    
    UPROPERTY(EditAnywhere)
    UGbxUIName* UINameOverride;
    
    UPROPERTY(EditAnywhere)
    UTeam* TeamOverride;
    
    UPROPERTY(EditAnywhere)
    UGestaltPartListData* GestaltPartListDataOverride;
    
    UPROPERTY(EditAnywhere)
    UDialogNameTag* DialogNameTagOverride;
    
    UPROPERTY(EditAnywhere)
    FSpawnFactorKeyedAction KeyedActions;
    
public:
    USpawnFactory_OakAI();
};

