#pragma once
#include "CoreMinimal.h"
#include "UIStatData.h"
#include "UIStatData_Ability.generated.h"

class UOakClassModInventoryBalanceStateComponent;

UCLASS(EditInlineNew)
class OAKGAME_API UUIStatData_Ability : public UUIStatData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText DescriptionText;
    
    UPROPERTY(Transient)
    int32 BonusAbilityPoints;
    
    UPROPERTY(Transient)
    FString ItemColorFrame;
    
    UPROPERTY(Transient)
    FText SkillTreeDelta_PrimaryPlayer;
    
    UPROPERTY(Transient)
    FText SkillTreeDelta_SecondaryPlayer;
    
    UPROPERTY(Transient)
    FString CharacterID;
    
    UPROPERTY(Export, Transient)
    UOakClassModInventoryBalanceStateComponent* OwningBalanceComponent;
    
    UUIStatData_Ability();
};

