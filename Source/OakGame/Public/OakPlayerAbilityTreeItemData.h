#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ESkillItemDisplayType.h"
#include "ESkillItemLayoutInfo.h"
#include "OakPlayerAbilityTreeItemData.generated.h"

UCLASS(Abstract, EditInlineNew, Within=OakPlayerAbilityTreeTierData)
class OAKGAME_API UOakPlayerAbilityTreeItemData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxPoints;
    
    UPROPERTY(EditDefaultsOnly)
    ESkillItemLayoutInfo LayoutInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FString ItemFrameName;
    
    UPROPERTY(EditDefaultsOnly)
    ESkillItemDisplayType ItemDisplayType;
    
    UPROPERTY(EditDefaultsOnly)
    FText ParentSkillName;
    
    UPROPERTY(EditDefaultsOnly)
    FText FlavorText;
    
    UPROPERTY(EditDefaultsOnly)
    FName EquipVO;
    
public:
    UOakPlayerAbilityTreeItemData();
};

