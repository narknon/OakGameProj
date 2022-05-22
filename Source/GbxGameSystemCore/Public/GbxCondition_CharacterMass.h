#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "EMassComparison.h"
#include "MassSelection.h"
#include "GbxCondition_CharacterMass.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_CharacterMass : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EMassComparison ComparisonTest;
    
    UPROPERTY(EditAnywhere)
    FMassSelection Mass;
    
public:
    UGbxCondition_CharacterMass();
};

